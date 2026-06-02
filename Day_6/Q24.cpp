#include <iostream>
using namespace std;

int main() {
    int x, n;
    long long value = 1;

    cout << "Enter base : ";
    cin >> x;

    cout << "Enter power : ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        value = value * x;
    }

    cout << x << " to the power " << n << " is " << value;

    return 0;
}