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

    int arr[n];

    cout << "Enter elements: ";
    inputArray(arr, n);

    cout << "Array elements are: ";
    displayArray(arr, n);

    int temp = arr[n - 1];
    for (int i = n - 1; i >= 1; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;

    cout << endl;
    cout << "Array after rotating to right: ";
    displayArray(arr, n);

    return 0;
}