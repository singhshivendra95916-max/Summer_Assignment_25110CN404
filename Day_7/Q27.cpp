#include <iostream>
using namespace std;

int SOD(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 10) + SOD(n / 10);
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Sum of digits = " << SOD(num);

    return 0;
}