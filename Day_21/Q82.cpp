#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int len = 0;

    while (str[len] != '\0') {
        len++;
    }

    int i = 0;
    int j = len - 1;
    while(i < j) {
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    cout << "Reversed string: " << str;

    return 0;
}