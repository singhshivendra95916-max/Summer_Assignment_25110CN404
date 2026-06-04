//Number Pyramid Pattern 

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

        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        int a = i - 1; 

        for (int k = 1; k <= i - 1; k++) {
            cout << a;
            a--;
        }

        cout << endl;

    }
    return 0;
}   