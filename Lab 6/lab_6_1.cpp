#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int *pInteger = nullptr;
    string *pString = nullptr;

    int integ;
    string strng;

    pInteger = &integ;
    pString = &strng;

    cout << "Enter an integer value: " << endl;
    cin >> *pInteger;

    cout << "Please enter a string: " << endl;
    cin >> *pString;

    cout << "\nYou entered integer: " << *pInteger << "\n";
    cout << "You entered string: " << *pString << endl;

    delete pInteger;
    delete pString;

    return 0;
}