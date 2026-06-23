#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    unordered_map<char, int> freq;

    for (char ch : str) {
        freq[ch]++;

        if (freq[ch] == 2) {
            cout << "First repeating character: " << ch;
            return 0;
        }
    }

    cout << "No repeating character found.";

    return 0;
}