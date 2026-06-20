#include <iostream>
using namespace std;

int main() {
    int rows, columns;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> columns;

    int arr[rows][columns];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "\nColumn wise Sum:\n";

    for (int j = 0; j < columns; j++) {
        int sum = 0;

        for (int i = 0; i < rows; i++) {
            sum += arr[i][j];
        }
        cout << "Sum of Column " << j + 1 << " = " << sum << endl;
    }

    return 0;
}