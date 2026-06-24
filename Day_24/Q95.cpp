#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    string longest = "", current = "";

    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            if (current.length() > longest.length()) {
                longest = current;
            }
            current = "";
        } else {
            current += str[i];
        }
    }

    cout << "Longest word: " << longest;

    return 0;
}