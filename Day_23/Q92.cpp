#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    unordered_map<char, int> freq;

    for (char ch : str) {
        freq[ch]++;
    }

    char maxChar;
    int maxFreq = 0;

    for (auto pair : freq) {
        if (pair.second > maxFreq) {
            maxFreq = pair.second;
            maxChar = pair.first;
        }
    }

    cout << "Maximum occurring character is " << maxChar << endl;
    cout << "Frequency = " << maxFreq;

    return 0;
}