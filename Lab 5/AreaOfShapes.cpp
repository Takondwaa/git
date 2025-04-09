#include <iostream>
#include <limits>
#include <string>
using namespace std;

double areaSquare(double side){
    return side * side;
}

double areaRectangle(double length, double width){
    return length * width;
}

double areaTriangle(double base, double height){
    return 0.5 * base * height;
}

int main(){
    int choice;
    while (true) {
        cout << "Please select the area of shape you want to calculate \n"
        << "1. Square \n"
        << "2. Rectangle \n"
        << "3. Triangle \n"
        << "4. Quit program \n\n"
        << "Enter selection: ";

        if(!(cin >> choice)){
            cout << "Your input was not an integer which is an invalid input \n"
            << "Please enter a valid input! \n\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        if (choice < 1 || choice > 4){
            cout << "Your input was: " << choice << " which is an invalid input \n"
            << "Please enter a valid input! \n\n";
            continue;
        }
        if (choice == 4){
            cout << "Quitting program. Goodbye! \n";
            break;
        } 
        switch (choice){
            case 1:
            double side;
            cout << "Enter the side length: ";
            cin >> side;
            cout << "The area of the square is: " << areaSquare(side) << "\n\n";
            break;

            case 2:
            double length, width;
            cout << "Enter the length: ";
            cin >> length;
            cout << "Enter the width: ";
            cin >> width;
            cout << "The area of the rectangle is: " << areaRectangle(length, width) << "\n\n";
            break;

            case 3:
            double base, height;
            cout << "Enter the base: ";
            cin >> base;
            cout << "Enter the height: ";
            cin >> height;
            cout << "The area of the trinangle is: " << areaTriangle(base, height) << "\n\n";
            break;
        }
    }
    return 0;
}