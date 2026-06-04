//Character Triangle Pattern

#include<iostream>
using namespace std;

int main(){
    int r;

    cout << "Enter the number of rows:";
    cin >> r;

    for (int i = 1; i <= r; i++) {
        char ch = 'A';
        
        for (int j = 1; j <= i; j++) {      
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}