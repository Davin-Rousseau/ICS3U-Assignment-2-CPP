// Copyright (c) 2019 Davin Rousseau All rights reserved
//
// Created by: Davin Rousseau
// Created on September 2019
// this program calculates the volume of a rectangular prism
// with user entering length, width, height in cm

#include <iostream>
#include <cmath>

int main() {
    // this function calculates volume of a rectangular prism
    int length;
    int width;
    int height;
    int volume;

    // input
    std::cout << "We will calculate the volume of a right rectangular prism. "
              << std::endl;
    std::cout << "Enter length of prism (cm): ";
    std::cin >> length;
    std::cout << "Enter width of prism (cm): ";
    std::cin >> width;
    std::cout << "Enter height of prism (cm): ";
    std::cin >> height;

    // process
    volume = length * width * height;

    // output
    std::cout << "" << std::endl;
    std::cout << "volume is " << volume << "cm^3" << std::endl;
}
