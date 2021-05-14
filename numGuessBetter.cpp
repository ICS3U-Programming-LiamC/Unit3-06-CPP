// Copyright (c) 2021 Liam Csiffary All rights reserved.
//
// Created by: Liam Csiffary
// Date: May 14, 2021
// This program picks a number between 0, 9
// and then has the user try to guess it


#include <iostream>

// got this library from a website while I was trying to
// make random numbers got it from
// https://www.bitdegree.org/learn/random-number-generator-cpp#random-numbers-between-1-and-10
#include <cstdlib>

// declares variables
int random_num;

// main function8
int main() {
    // this code is also from that same wabsite, it
    // makes it so that theb number generated is
    // everytime the code runs
    srand((unsigned) time(0));
    // create the random number
    random_num = (rand() % 9);

    // just a test so I can test easier
    random_num = 7;
    std::cout << random_num;

  // this function uses a try statement
    std::string userNumAsString;
    int userNum;

    // input
    std::cout << "\nGuess a number between 0, 9: ";
    std::cin >> userNumAsString;

    try {
        userNum = std::stoi(userNumAsString);

                // if the user guessed right the first time
        if (userNum == random_num) {
            std::cout << "You are correct!";

        } else {
            // if the user gets it wrong
            std::cout << "You are incorrect";

            // if the number is smaller than the random number
            if (userNum > random_num) {
                // ask the user for another guess after\
                telling them their number is bigger
                std::cout << "\nYour number was bigger than the random number";
                std::cout << "\nWhat do you think the number is: ";
                std::cin >> userNum;

                // tell the user they are correct
                if (userNum == random_num) {
                    std::cout << "You are correct!";
                } else {
                // tell the user the are incorrect and tell them the
                // random number
                    std::cout << "You are incorrect\n";
                    std::cout << "The random number was " << random_num;
                }
            } else {
                // ask the user for another guess after \
                telling them their number is smaller
                std::cout << "\nYour number was smaller than the random number";
                std::cout << "\nWhat do you think the number is: ";
                std::cin >> userNum;

                // tell them they are correct
                if (userNum == random_num) {
                    std::cout << "You are correct!";
                } else {
                    // tell them they are incorrect and tell them the random_num
                    std::cout << "You are incorrect\n";
                    std::cout << "The random number was " << random_num;
                }
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid integer";
    }
}
