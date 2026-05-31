#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;

    cout << "Enter starting no. of range: ";
    cin >> start;

    cout << "Enter ending no. of range: ";
    cin >> end;

    cout << "Armstrong numbers are: ";

    for (int num = start; num <= end; num++) {
        int temp = num;
        int digits = 0;
        int sum = 0;

        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        if (num == 0)
            digits = 1;

        temp = num;

        while (temp > 0) {
            int rem = temp % 10;
            sum += round(pow(rem, digits));
            temp /= 10;
        }

        if (num == 0)
            sum = 0;

        if (sum == num)
            cout << num << " ";
    }

    return 0;
}