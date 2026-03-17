//
// Created by Salom on 3/17/2026.
//

#include<iostream>
#include<cmath>
#include "userDefinedFunctions.h"


         // Actual Functions


// Menu and Validation Functions

void displayMenu() {
    std::cout << "What type of Calculation would you like to make? " << std::endl << std::endl;
    std::cout << "1. Area of a Circle" << std::endl;
    std::cout << "2. Perimeter of a Circle" << std::endl;
    std::cout << "3. Area of a Rectangle" << std::endl;
    std::cout << "4. Perimeter of a Rectangle" << std::endl;
    std::cout << "5. Quit" << std::endl;
}


// Function that won't continue until receives int value for shapeOption

int getMenuOption() {
    int shapeOption;
    std::cout << "Option: ";

    while (!(std::cin >> shapeOption)) {
        std::cout << "Invalid input. Enter a number 1-5: ";

        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }

    std::cout << std::endl;
    return shapeOption;
}


// Provides true or false if shapeOption is 1-5 or not

bool isValidMenuOption(const int shapeOption) {
    return shapeOption >= 1 && shapeOption <= 5;
}


//Input Check and Getter functions

bool getValidDouble(double &value) {
    std::cin >> value;

    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        return false;
    }
    return true;
}


// Takes a double input for Radius

void getCircleInput(double &radius) {
    std::cout << "Input radius: ";

    while (!getValidDouble(radius) || radius <= 0) {
        std::cout << "Enter a positive number: ";
    }
}


// Takes double inputs for length and width

void getRectangleInput(double &length, double &width) {
    std::cout << "Input length: ";
    while (!getValidDouble(length) || length <= 0) {
        std::cout << "Enter a positive number: ";
    }

    std::cout << "Input width: ";
    while (!getValidDouble(width) || width <= 0) {
        std::cout << "Enter a positive number: ";
    }
}


// Outputs Print function

void printResult(const double value, const double radius, const double length, const double width, const int shapeOption) {
    switch (shapeOption) {
        case 1:
            std::cout << "The Area of a Circle with a radius of " << radius << " is " << value << std::endl;
            break;
        case 2:
            std::cout << "The Perimeter of a Circle with a radius of " << radius << " is " << value << std::endl;
            break;
        case 3:
            std::cout << "The Area of a Rectangle with a length of " << length << " and a width " << width << " is " << value << std::endl;
            break;
        case 4:
            std::cout << "The Perimeter of a Rectangle with a length of " << length << " and a width " << width << " is " << value << std::endl;
            break;



    }
}


        // Shape Calculations functions


// Calculate Area of a Circle

double calculateArea(const double radius) {
    const double area = radius * radius * M_PI;
    return area;
}


// Calculate Area of a Rectangle

double calculateArea(const double length, const double width) {
    const double area = length * width;
    return area;
}


// Calculate Circumference of a Circle

double calculatePerimeter(const double radius) {
    const double perimeter = 2 * radius * M_PI;
    return perimeter;
}


// Calculate Perimeter of a Rectangle

double calculatePerimeter(const double length, const double width) {
    const double perimeter = ( 2 * length ) + ( 2 * width);
    return perimeter;
}
