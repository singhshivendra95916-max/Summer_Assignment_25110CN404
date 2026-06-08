#include <iostream>
#include <cmath>
using namespace std;

bool checkArmstrong(int num) {
    if (num < 0)
        return false;

    int digits = 0;
    int sum = 0;

    int temp = num;

    while (temp > 0) {             // digits count 
        digits++;
        temp /= 10;
    }

    temp = num;

    while (temp > 0) {
        int rem = temp % 10;
        sum += round(pow(rem, digits));              
        temp /= 10;
    }

    return sum == num;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (checkArmstrong(num))
        cout << num << " is an Armstrong number";
    else
        cout << num << " is not an Armstrong number";

    return 0;
}