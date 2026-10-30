// Copyright (c) 2026 Kamche All rights reserved.
// .
// Created by: Your Kamche
// Date: Oct 27, 2026
// This program asks the user to enter a year
// an determine if it is a leap year or not.
#include <iostream>
#include <string>


int main() {
    // declare variables
    int leap_yearInt;
    std::string leap_yearStr;

    // ask user for a year
    std::cout << "Enter a year that could be a leap year:";
    std::cin >> leap_yearStr;
    std::cout << "\n";

    // check if the user year is a leap year
    try {
        leap_yearInt = std::stoi(leap_yearStr);

        if (leap_yearInt % 4 == 0) {
            if (leap_yearInt % 100 == 0) {
                if (leap_yearInt % 400 == 0) {
                    std::cout << leap_yearStr << " is a leap year" << std::endl;
                } else {
                    std::cout << leap_yearStr << " is not a leap year"
                                              << std::endl;
                }
            } else {
                std::cout << leap_yearStr << " is a leap year" << std::endl;
            }
        } else {
            std::cout << leap_yearStr << " is not a leap year" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << leap_yearStr << " is not a valid year" << std::endl;
    }
    std::cout << "Thanks for playing" << std::endl;
