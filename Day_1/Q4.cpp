#include <iostream>
using namespace std;

int main(){
    int num;
    int countdigit=0;

    cout << "Enter a number : ";
    cin >> num;

    int flag=num;

    while(num>0)
    {
        countdigit++;
        num=num/10;
    }

    cout << "Number of digits in " << flag << " is " << countdigit ;

    return 0;
}