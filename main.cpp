#include <iostream>
#include <cmath>


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

void getCircleInput(double &radius) {
    std::cout << "Input radius: ";

    while (!getValidDouble(radius) || radius <= 0) {
        std::cout << "Enter a positive number: ";
    }
}

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

// Output Print function

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


        // Main Function


int main() {
    double radius = -1;
    double length = -1;
    double width = -1;

    int shapeOption;

    do {
        displayMenu();
        shapeOption = getMenuOption();

        if (!isValidMenuOption(shapeOption)) {
            std::cout << "Input an option 1-5\n";
            continue;
        }

        switch (shapeOption) {
            case 1: // Area of a Circle
                getCircleInput(radius);
                printResult(calculateArea(radius), radius, length, width, shapeOption);
                break;
            case 2:
                getCircleInput(radius);
                printResult(calculatePerimeter(radius), radius, length, width, shapeOption);
                break;
            case 3:
                getRectangleInput(length, width);
                printResult(calculateArea(length, width), radius, length, width, shapeOption);
                break;
            case 4:
                getRectangleInput(length, width);
                printResult(calculatePerimeter(length, width), radius, length, width, shapeOption);
                break;
            case 5: // Quit option
                std::cout << "Have a good day! :p" << std::endl;
                break;
        }
    } while (shapeOption != 5);
    return 0;
}

