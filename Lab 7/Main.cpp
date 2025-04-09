#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
    Rectangle rect;
    float len, wid;

    cout << "Enter the length of the retangle: ";
    cin >> len;
    cout << "Enter the width of the rectangle: ";
    cin >> wid;

    rect.setLength(len);
    rect.setWidth(wid);

    cout << "Area of the retangle is: " << rect.calculateArea() << endl;

    return 0;
}