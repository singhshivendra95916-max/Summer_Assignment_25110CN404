#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void display(string str) {
    cout << "String: " << str << endl;
}

void length(string str) {
    cout << "Length = " << str.length() << endl;
}

void reverseStr(string str) {
    reverse(str.begin(), str.end());
    cout << "Reversed String = " << str << endl;
}

void upperCase(string str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] = toupper(str[i]);
    }
    cout << "Uppercase String = " << str << endl;
}

void lowerCase(string str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
    cout << "Lowercase String = " << str << endl;
}

int main() {
    string str;
    int choice;

    cout << "Enter a string: ";
    getline(cin, str);

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Display String\n";
        cout << "2. Find Length\n";
        cout << "3. Reverse String\n";
        cout << "4. Convert to Uppercase\n";
        cout << "5. Convert to Lowercase\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                display(str);
                break;

            case 2:
                length(str);
                break;

            case 3:
                reverseStr(str);
                break;

            case 4:
                upperCase(str);
                break;

            case 5:
                lowerCase(str);
                break;

            case 6:
                cout << "Exiting Program..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while (choice != 6);

    return 0;
}