#include <iostream>
using namespace std;

bool checkPalindrome(int num) {
    int original = num;
    int rev = 0;

    while (num > 0) {
        int rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    return original == rev;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (checkPalindrome(num))
        cout << num << " is a Palindrome";
    else
        cout << num << " is not a Palindrome";

    return 0;
}