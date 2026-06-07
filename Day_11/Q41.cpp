#include <iostream>
using namespace std;

int sum(int n1 , int n2 ) {
    return n1 + n2;
}

int main(){
    int num1 , num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Sum of two entered number is " << sum(num1 , num2);

    return 0;
}