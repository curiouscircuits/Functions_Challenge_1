/*
Author: Salomon Lopez
 Date: 3/17/26
 Purpose: User Define
 */

#include <iostream>
#include "userDefinedFunctions.h"


        // Main Function


int main() {
    double radius = -1;
    double length = -1;
    double width = -1;

    int shapeOption; // User Option Variable


    // Do while function Runs Program until User selects Quit Option (5)

    do {
        displayMenu(); // Displays menu
        shapeOption = getMenuOption(); // Takes user input and assigns to shapeOption

        if (!isValidMenuOption(shapeOption)) { // Function checks if shapeOption is valid (If not skip rest of code and restart Do loop
            std::cout << "Input an option 1-5\n";
            continue;  //
        }


        //Switch controls which Menu option User is presented

        switch (shapeOption) {
            case 1: // Area of a Circle
                getCircleInput(radius);
                printResult(calculateArea(radius), radius, length, width, shapeOption);
                break;
            case 2: // Perimeter of a Circle
                getCircleInput(radius);
                printResult(calculatePerimeter(radius), radius, length, width, shapeOption);
                break;
            case 3: // Area of a Rectangle
                getRectangleInput(length, width);
                printResult(calculateArea(length, width), radius, length, width, shapeOption);
                break;
            case 4: // Perimeter of a Rectangle
                getRectangleInput(length, width);
                printResult(calculatePerimeter(length, width), radius, length, width, shapeOption);
                break;
            case 5: // Quit option
                std::cout << "Have a good day! :p" << std::endl;
                break;
        }
    } while (shapeOption != 5); // Do loop only closes when shapeOption is 5
    return 0;
}

