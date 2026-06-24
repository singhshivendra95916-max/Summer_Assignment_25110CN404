#include <bits/stdc++.h>
using namespace std;

int compress(vector<char>& chars) {
    int n = chars.size();

    int index = 0;
    int i = 0;

    while (i < n) {
        char curr_char = chars[i];
        int count = 0;

        //find count of duplicates
        while (i < n && chars[i] == curr_char) {
            count++;
            i++;
        }

        //assign current character 
        chars[index] = curr_char;
        index++;

        if (count > 1) {
            string count_str = to_string(count);

            for (char digit : count_str) {
                chars[index] = digit;
                index++;
            }
        }
    }

    return index;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    vector<char> chars(str.begin(), str.end());

    int len = compress(chars);

    cout << "Compressed Array: ";
    for (int i = 0; i < len; i++) {
        cout << chars[i];
    }

    return 0;
}