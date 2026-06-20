#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter order of matrix: ";
    cin >> n;

    int arr[n][n];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int sym = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i][j] != arr[j][i]) {
                sym++;
            }
        }
    }

    if (sym == 0)
        cout << "Matrix is Symmetric";
    else
        cout << "Matrix is Not Symmetric";

    return 0;
}