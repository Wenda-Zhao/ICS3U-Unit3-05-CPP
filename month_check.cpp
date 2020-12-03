// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Dec 2020
// This program is for month check

#include <iostream>
#include <string>


int main() {
    // this fuction is for month check
    std::string monthNumberAsString;
    int monthNumberAsInt;

    // input
    std::cout << "Enter the month: ";
    std::cin >> monthNumberAsString;

    monthNumberAsInt = atoi(monthNumberAsString.c_str());

    // process
    switch (monthNumberAsInt) {
        case 1 :
            // output
            std::cout << " January " << std::endl;
            break;
        // process
        case 2 :
            // output
            std::cout << " February " << std::endl;
            break;
        // process
        case 3 :
            // output
            std::cout << " March " << std::endl;
            break;
        // process
        case 4 :
            // output
            std::cout << " April " << std::endl;
            break;
        // process
        case 5 :
            // output
            std::cout << " May " << std::endl;
            break;
        // process
        case 6 :
            // output
            std::cout << " June " << std::endl;
            break;
        // process
        case 7 :
            // output
            std::cout << " July " << std::endl;
            break;
        // process
        case 8 :
            // output
            std::cout << " August " << std::endl;
            break;
        // process
        case 9 :
            // output
            std::cout << " September " << std::endl;
            break;
        // process
        case 10 :
            // output
            std::cout << " October " << std::endl;
            break;
        // process
        case 11 :
            // output
            std::cout << " November " << std::endl;
            break;
        // process
        case 12 :
            // output
            std::cout << " December " << std::endl;
            break;
        // process
        default :
            // output
            std::cout << " Sorry, it's not a month! " << std::endl;
    }
}
