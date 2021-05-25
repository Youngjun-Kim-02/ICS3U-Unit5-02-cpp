// Copyright (c) 2021 Youngjun Kim rights reserved
//
// Created by: Youngjun Kim
// Created on: May 2021
// This program uses user defined functions

#include <iostream>

void calculateArea(int base, int height) {
    // calculate area
    int area;
    
    // process
    area = base * height / 2;
    
    // output
    std::cout << "The area is " << area << " cm²" << std::endl;
}

int main() {
    // this function gets base and height

    int baseFromUser;
    int heightFromUser;
    
    // input
	std::cout << "Enter the base of a triangle: ";
	std::cin >> baseFromUser;
	std::cout << "Enter the height of a triangle: ";
	std::cin >> heightFromUser;
	std::cout << std::endl;
	
	// call functions
	calculateArea(baseFromUser, heightFromUser);
}
