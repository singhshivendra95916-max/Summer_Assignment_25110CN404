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

    cout << "Intersection of arrays: ";

    bool used[n2] = {false};

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (!used[j] && arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                used[j] = true;                  // mark this occurrence as used
                break;                          // move to next element of arr1
            }
        }
    }

    return 0;
}