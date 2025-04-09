#include <iostream> 
using namespace std;

int main(){
    int firstValue;
    int secondValue;
    int *pPointer = nullptr;

    pPointer = &firstValue;
    *pPointer = 10;

    pPointer = &secondValue;
    *pPointer = 20;

    cout << "firstvalue is :" << firstValue << endl; 
    cout << "secondValue is :" << secondValue << endl;
    
    return 0;
}