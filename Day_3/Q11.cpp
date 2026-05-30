#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    while (b != 0) 
    {
        int flag = b;
        b = a % b;
        a = flag;
    }

    cout << "GCD of entered number is : " << a;

    return 0;
}