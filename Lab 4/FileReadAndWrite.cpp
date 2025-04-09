#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main() {
    char data[100];

    //Open a text file in write mode
    ofstream outfile;
    outfile.open("afile.txt");
    cout<< "Writing to the file" << endl;
    cout<< "Enter your name: " << endl;
    cin.getline(data, 100);

    //Write inputted data into the text file
    outfile << data << endl;

    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();

    //Again write inputted data into the text file 
    outfile << data << endl;

    //Close the openend file
    outfile.close();

    //Open a text file in read mode 
    ifstream infile;
    infile.open("afile.txt");

    cout << "Reading from the file" << endl;
    infile >> data;

    //Write the data at the screen
    cout << data << endl;

    //Again read the data from the file and display it
    infile >> data;
    cout <<data << endl;

    //Close the opened file
    infile.close();
    
    return 0;
}