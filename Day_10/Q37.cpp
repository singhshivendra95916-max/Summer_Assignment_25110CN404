//Star Pyramid pattern

#include<iostream>
using namespace std;

int main(){
    int r;

    cout << "Enter the number of rows: ";
    cin >> r;

    for (int i = 1; i <= r; i++) {

        for (int space = 1; space <= r - i; space++) {             //space print
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++) {         //star print
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}