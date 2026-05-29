#include<iostream>
using namespace std ;

int main(){
    int num ;
    int sum=0 ;
    int rem;
    
    cout << "Enter a number :" ;
    cin >> num ;

    int flag = num ;

    if(num<0)
    {
        num=-num;           // converting negative number to positive
    }

    while(num>0)
    {
        rem = num % 10 ;
        sum = sum + rem ;
        num = num / 10 ;
    }

    cout << " Sum of the digits of " << flag << " is " << sum ;

    return 0;
}