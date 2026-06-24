#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        for (int j = i + 1; j < str.length(); ) {
            if (str[i] == str[j]) {
                str.erase(j, 1);
            } else {
                j++;
            }
        }
    }

    cout << "After removing duplicates: " << str;

    return 0;
}