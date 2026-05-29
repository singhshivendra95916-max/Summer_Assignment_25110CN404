#include<iostream>
using namespace std;

int main() {
    int num, rem, rev = 0;

    cout << "Enter a number: ";
    cin >> num;

    int flag = num;

    if(num < 0) {
        num = -num;
    }

    while(num > 0) {
        rem = num % 10;                 
        rev = rev * 10 + rem;  
        num = num / 10;                
    }

    if(flag < 0) {
        rev = -rev;
    }

    cout << "Reverse of " << flag << " is " << rev;

    return 0;
}