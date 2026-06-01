#include <iostream>
using namespace std;

int main(){
    int num;

     cout << "Enter a number : ";
     cin >> num;

     int st = 2;          // starting with 2 and so on  

    while (st * st <= num)         
    {
       if(num % st == 0)
       {
           num = num / st;
       }else{
           st++;
       }
    }

    cout << "Largest Prime Factor is " << num;

    return 0;
}