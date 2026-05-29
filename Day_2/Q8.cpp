#include<iostream>
using namespace std;

int main() {
    int num, rem, rev = 0;

    cout << "Enter a number: ";
    cin >> num;

    int temp = num;

    if(num < 0) {
        num = -num;
    }

    while(num > 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if(temp < 0) {
        rev = -rev;
    }

    if(temp == rev) {
        cout << temp << " is a Palindrome number";
    }
    else {
        cout << temp << " is not a Palindrome number";
    }

    return 0;
}