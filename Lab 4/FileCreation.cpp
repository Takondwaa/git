#include<iostream>
#include<fstream>
using namespace std;
int main() 
{
    //Create and open a text file
    ofstream MyFile("exampleFile.txt");
    if(MyFile.is_open()){
        //Proceed with output
        cout<< "MyFile is open";
    }
    //Close the file
    MyFile.close();
    return 0;
}