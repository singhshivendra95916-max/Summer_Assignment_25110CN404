#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (str1.length() != str2.length()) {
        cout << "Strings are not anagrams";
        return 0;
    }

    unordered_map<char, int> freq;

    for (char ch : str1) {
        freq[ch]++;
    }

    for (char ch : str2) {
        freq[ch]--;
    }

    for (auto pair : freq) {
        if (pair.second != 0) {
            cout << "Strings are not anagrams";
            return 0;
        }
    }

    cout << "Strings are anagrams";

    return 0;
}