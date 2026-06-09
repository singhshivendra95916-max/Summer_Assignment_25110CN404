#include <iostream>
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
    int n;

    cout << "Enter number of elements : ";
    cin >> n;

    int arr[100];

    cout << "Enter elements: ";
    inputArray(arr, n);

    cout << "Array elements are: ";
    displayArray(arr, n);

    return 0;
}