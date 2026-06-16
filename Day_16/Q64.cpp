#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements : ";
    cin >> n;

    int arr[n];
    set<int> s;

    cout << "Enter array element : ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        s.insert(arr[i]);
    }

    int newSize = 0;              

    for (auto it : s) {
        arr[newSize] = it;
        newSize++;                         //size of array after removing duplicates

    }

    cout << "Array after removing duplicates: ";

    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}