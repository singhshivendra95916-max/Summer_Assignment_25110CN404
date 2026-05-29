#include<iostream>
using namespace std ;

int main(){
    int num;
    int mul=1;
    int rem;
    
    cout << "Enter a number :";
    cin >> num;

    int flag = num;

    if(num<0)
    {
        num=-num;           // converting negative number to positive
    }

    while(num>0)
    {
        rem = num % 10;
        mul = mul * rem;
        num = num / 10;
    }

    cout << "multiplication of the digits of " << flag << " is " << mul;

    return 0;
}