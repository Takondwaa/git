#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1 = "Hello";
    string str2 = "World";
    string str3;
    int len;

    str3 = str1;
    cout << "str3 : " << str3 << endl;

    //Concatenates str1 and str2
    str3 = str1 + str2;
    cout << "str1 + str2 : " << str3 << endl;

    //Total length of str3 aftrer concatenation
    len = str3.size();
    cout << "str3.size() : " << len << endl;

    return 0;
}