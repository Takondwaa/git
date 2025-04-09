#include <iostream>
#include <limits>
#include <string>
using namespace std;

int main() {
    int rows; 
    int cols;

    do {
        cout << "Enter number of rows 1 to 3: ";
        cin >> rows;
        cout << "Enter number of columns 1 to 3: ";
        cin >> cols;

        if (rows < 1 || rows > 3 || cols < 1 || cols > 3) {
            cout << "Invalid dimensions. Both must be between 1 and 3.\n\n";
        }
    } while (rows < 1 || rows > 3 || cols < 1 || cols > 3);

    double** matrix = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new double[cols];
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "\nYou entered:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }

    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }

    delete[] matrix;

    return 0;
}
