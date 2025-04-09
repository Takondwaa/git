#include <iostream>
#include <string>
using namespace std;

int main(){
    string codes[]={"B123","C234","A345","C15","B177","G3003","C235","B179"};
    const int numCodes = sizeof(codes) / sizeof(codes[0]);

    //Iterate through the array
    for(int i = 0; i < numCodes; i++){
        //Check if string is not empty and starts with 'B'
        if(!codes[i].empty() && codes[i][0] == 'B'){
            cout << codes[i] << endl;
        }
    }
    return 0;
}