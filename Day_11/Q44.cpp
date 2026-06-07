#include <iostream>
using namespace std;

long long factorial(int n){
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) 
        cout << "Factorial is not defined for negative number.";
    else
        cout << "Factorial of " << num << " = " << factorial(num);

    return 0;
}