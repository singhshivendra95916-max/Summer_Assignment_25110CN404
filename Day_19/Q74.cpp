#include <iostream>
using namespace std;

int main() {
    int rows, columns;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> columns;

    int A[10][10], B[10][10], Sub[10][10];

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {                       // subtracting both the matrices
        for (int j = 0; j < columns; j++) {
            Sub[i][j] = A[i][j] - B[i][j];
        }
    }

    cout << "Subtraction of the matrices:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << Sub[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}