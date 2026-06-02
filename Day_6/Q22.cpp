#include <iostream>
using namespace std;

int main(){
    int binary;
    int decimal = 0;
    int weight = 1;                           // weight indicates that by which power of 2 increases

    cout << "Enter Binary Number : ";
    cin >> binary;

    while(binary != 0){
        int rem = binary % 10;
        decimal = decimal + rem * weight;         
        weight = weight * 2;
        binary = binary / 10;
    }

    cout << "Decimal Number : " << decimal;

    return 0;
}