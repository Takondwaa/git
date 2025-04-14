#include <iostream>
#include <limits>

#include "Area.hpp"
#include "Square.hpp"
#include "Triangle.hpp"
#include "Circle.hpp"

void clearInput() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
    int choice = 0;

    while (true) {
        std::cout << "\n=== Area Calculator ===\n"
                  << "1. Calculate the area of a square\n"
                  << "2. Calculate the area of a triangle\n"
                  << "3. Calculate the area of a circle\n"
                  << "4. Quit\n"
                  << "Enter your choice: ";
        if (!(std::cin >> choice)) {
            clearInput();
            std::cout << "Invalid input. Please enter a number between 1 and 4.\n";
            continue;
        }

        if (choice == 4) {
            std::cout << "Goodbye!\n";
            break;
        }

        switch (choice) {
            case 1: {
                double side;
                std::cout << "Enter the side length of the square: ";
                std::cin >> side;
                shapes::Square sq(side);
                double area = Area::calculateArea(sq);
                std::cout << "Area of square: " << area << "\n";
                break;
            }
            case 2: {
                double base, height;
                std::cout << "Enter the base of the triangle: ";
                std::cin >> base;
                std::cout << "Enter the height of the triangle: ";
                std::cin >> height;
                shapes::Triangle tri(base, height);
                double area = Area::calculateArea(tri);
                std::cout << "Area of triangle: " << area << "\n";
                break;
            }
            case 3: {
                double radius;
                std::cout << "Enter the radius of the circle: ";
                std::cin >> radius;
                shapes::Circle cir(radius);
                double area = Area::calculateArea(cir);
                std::cout << "Area of circle: " << area << "\n";
                break;
            }
            default:
                std::cout << "Please choose a valid option (1–4).\n";
                break;
        }
    }

    return 0;
}
