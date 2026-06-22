#include <iostream>
#include <string>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int word = 1;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            word++;
        }
    }
    cout << "Number of words in sentence = " << word;

    return 0;
}