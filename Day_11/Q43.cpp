#include <iostream>
using namespace std;

bool checkPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (checkPrime(num))
        cout << num << " is a Prime Number";
    else
        cout << num << " is not a Prime Number";

    return 0;
}