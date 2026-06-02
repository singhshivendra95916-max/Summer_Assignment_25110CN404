#include <iostream>
using namespace std;

int main(){
    int decimal;
    int ans[100];
    int i = 0;

    cout << "Enter Decimal Number: ";
    cin >> decimal;

    while(decimal != 0 ){
        ans[i] = decimal % 2;              //storing remainders in array (remaiders are either 0 or 1 only )
        decimal = decimal / 2;
        i++;                               
    }

    cout << "Binary Number : ";

    for(int j = i-1 ; j >= 0 ; j--){
        cout << ans[j];                        //printing binary number by reversing ans array
    }

    return 0;

}