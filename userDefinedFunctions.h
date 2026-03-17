//
// Created by Salom on 3/17/2026.
//

#ifndef FUNCTIONS_CHALLENGE_1_USERDEFINEDFUNCTIONS_H
#define FUNCTIONS_CHALLENGE_1_USERDEFINEDFUNCTIONS_H

// Initiate Function Prototypes

// Menu and Validation functions
void displayMenu();
int getMenuOption();
bool isValidMenuOption(int shapeOption);

// Input Check and Getter functions
bool getValidDouble(double &value);
void getCircleInput(double &radius);
void getRectangleInput(double &length, double &width);

// Output functions
void printResult(const double value, const double radius, const double length, const double width, const int shapeOption);

// Calculation Functions
double calculateArea(const double radius);
double calculateArea(const double length, const double width);
double calculatePerimeter(const double radius);
double calculatePerimeter(const double length, const double width);



#endif //FUNCTIONS_CHALLENGE_1_USERDEFINEDFUNCTIONS_H