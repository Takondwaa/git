#include <iostream>
#include <limits>
#include <string>
using namespace std;

int main() {
    int value;

    cout << "Enter an integer value between 5 and 10: " << endl;

    while (true) {
        
        if (cin >> value) {
            
            if (value >= 5 && value <= 10) {
                
                cout << "Your input value(" << value << ") has been accepted." << endl;
                break;
            } else {
                
                cout << "You entered " << value
                << ". Please enter a number between 5 and 10." << endl;
            }
        } else {
        
            cout << "Sorry, you entered an invalid number, please try again" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    return 0;
}
