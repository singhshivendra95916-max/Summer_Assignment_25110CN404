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

    int temp = arr[0];
    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;

    cout << endl;
    cout << "Array after rotating to left: ";
    displayArray(arr, n);

    return 0;
}