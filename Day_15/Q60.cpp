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

void swap(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
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

    //step1
    int i;
    int j = -1;
    for (i = 0; i < n; i++) {
        if (arr[i] == 0) {
            j = i;
            break;
        }
    }
    //step2
    for (i = j + 1; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i] , arr[j]);
            j++;
        }
    }

    cout << endl;
    cout << "Array after moving zeroes to the end: ";
    displayArray(arr, n);

    return 0;
}