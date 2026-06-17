#include <bits/stdc++.h>
using namespace std;

void inputArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    int arr1[n1];

    cout << "Enter elements of first array: ";
    inputArray(arr1, n1);
    

    cout << "Enter size of second array: ";
    cin >> n2;

    int arr2[n2];

    cout << "Enter elements of second array: ";
    inputArray(arr2, n2);
    

    set<int> st;

    for (int i = 0; i < n1; i++) {
        st.insert(arr1[i]);
    }

    for (int i = 0; i < n2; i++) {
        st.insert(arr2[i]);
    }

    cout << "Union of arrays: ";
    for (auto it : st) {
        cout << it << " ";
    }

    return 0;
}