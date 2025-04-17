#include <iostream>
#include "Box.cpp"

int main(){
    Box Box1;                   //Declare Box1 of the Box
    Box Box2;                   //Declare Box2 of the Box
    Box Box3;                   //Declare Box3 of the Box
    double volume = 0.0;        //Store the volume of a box here

    //Box 1 specification
    Box1.SetLength(6.0);
    Box1.SetBreadth(7.0);
    Box1.SetHeight(5.0);

    //Box 2 specification
    Box2.SetLength(12.0);
    Box2.SetBreadth(13.0);
    Box2.SetHeight(10.0);

    //Volume of box 1
    volume = Box1.GetVolume();
    cout << "Volume of Box1 : " << volume << endl;

    //Volume of box 2
    volume = Box2.GetVolume();
    cout << "Volume of Box2 : " << volume << endl;

    //Add two objects as follows:
    Box3 = Box1 + Box2;

    //Volume of box 3
    volume = Box3.GetVolume();
    cout << "Volume of Box3 : " << volume << endl;

    return 0;
}