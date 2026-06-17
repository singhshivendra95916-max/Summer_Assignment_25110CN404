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

int main () {
    int n1,n2;

    cout << "Enter number of elements of first array : ";
    cin >> n1;

    int arr1[n1];

    cout << "Enter elements: ";
    inputArray(arr1, n1);

    cout << "Enter number of elements of second array : ";
    cin >> n2;

    int arr2[n2];

    cout << "Enter elements: ";
    inputArray(arr2, n2);

    int mergedArr[n1 + n2];

    for (int i = 0; i < n1; i++) {
        mergedArr[i] = arr1[i];
    }

    for (int i = 0; i < n2; i++) {
        mergedArr[n1 + i] = arr2[i];
    }

    cout << "Merged array: ";
    displayArray(mergedArr, n1 + n2);

    return 0;


}