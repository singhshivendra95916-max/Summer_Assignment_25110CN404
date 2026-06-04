//Reverse Star Pattern

#include <iostream>
using namespace std;

int main() {
    int r;

    cout << "Enter the number of rows: ";
    cin >> r;

    for (int i = 1; i <= r; i++) {
        for (int j = r; j >= i; j--) {               // alternate method j=1;j<=r+1-i;j++
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}