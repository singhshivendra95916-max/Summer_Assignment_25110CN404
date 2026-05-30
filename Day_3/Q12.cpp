#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int x = num1, y = num2;

    // Finding GCD
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    int gcd = x;

    // LCM formula
    int lcm = (num1 * num2) / gcd;

    cout << "LCM = " << lcm;

    return 0;
}