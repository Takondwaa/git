#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

/// Reverses the input string and returns the result.
string Reverse(const string &s) {
    return string(s.rbegin(), s.rend());
}

int main() {
    // ii. Open the prepared text file and read its contents into fileData
    ifstream infile("statement.txt");
    if (!infile) {
        cerr << "Error: could not open file 'statement.txt'\n";
        return 1;
    }
    // Read entire file into fileData
    string fileData;
    {
        ostringstream ss;
        ss << infile.rdbuf();
        fileData = ss.str();
        // If the file ends with a newline you don't want counted as a word,
        // you could strip it here:
        if (!fileData.empty() && fileData.back() == '\n') {
            fileData.pop_back();
        }
    }
    infile.close();

    // iii. Count vowels in fileData
    int vowelCount = 0;
    for (char ch : fileData) {
        char lc = static_cast<char>(tolower(static_cast<unsigned char>(ch)));
        if (lc=='a' || lc=='e' || lc=='i' || lc=='o' || lc=='u') {
            ++vowelCount;
        }
    }
    cout << "Number of vowels: " << vowelCount << "\n";

    // iv. Count words in fileData
    istringstream iss(fileData);
    int wordCount = 0;
    string word;
    while (iss >> word) {
        ++wordCount;
    }
    cout << "Number of words: " << wordCount << "\n";

    // v. Reverse the statement
    string reversed = Reverse(fileData);
    cout << "Reversed statement:\n" << reversed << "\n";

    // vi. Capitalize the second letter of each word
    string capSecond = fileData;
    bool newWord = true;
    for (size_t i = 0; i + 1 < capSecond.size(); ++i) {
        if (isspace(static_cast<unsigned char>(capSecond[i]))) {
            newWord = true;
        }
        else if (newWord) {
            // i is the first character of a word, so i+1 is the second
            if (!isspace(static_cast<unsigned char>(capSecond[i+1]))) {
                capSecond[i+1] = static_cast<char>(toupper(static_cast<unsigned char>(capSecond[i+1])));
            }
            newWord = false;
        }
    }
    cout << "Second letters capitalized:\n" << capSecond << "\n";

    return 0;
}
