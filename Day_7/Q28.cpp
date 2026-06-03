#include <iostream>
using namespace std;

int reverse(int n , int rev)
{
    if (n == 0)
        return rev;
    else{
        rev = (rev * 10) + (n % 10);
        return reverse(n / 10 , rev);
    }
}

int main()
{
    int num;
    int rev = 0;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Reverse of number " << num << " is " << reverse (num , rev);

    return 0;
}