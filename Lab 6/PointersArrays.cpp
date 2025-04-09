#include <iostream> 
using namespace std;

int main(){
    int numbersArray[5];
    int *pPointer = nullptr;

    //First element
    *pPointer = 10;

    //Second element
    pPointer++;
    *pPointer = 20;

    //Third element
    pPointer = &numbersArray[2];
    *pPointer = 30;

    //Fourth element
    pPointer = numbersArray + 3;
    *pPointer = 40;
    
    //Fifth element
    *(pPointer+4) = 50;

    for (int n = 0; n < 5; n++){
        cout << numbersArray[n];
    }
    return 0;
}