#include <iostream>
using namespace std;

int main() {
    int Num, count = 0;

    cout << "Enter a number: ";
    cin >> Num;
    
    while (Num > 0) {             
        if(Num & 1){         // this manipulation is done by reading Num as binary number
            count++;              
        }
        Num = Num >> 1;
    }

    cout << "Number of set bits = " << count;

    return 0;
}