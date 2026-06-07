#include <iostream>
using namespace std;

int maximum(int n1, int n2)
{
    if (n1 > n2)
        return n1;
    else
        return n2;
}

int main()
{
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Maximum number is " << maximum(num1, num2);

    return 0;
}