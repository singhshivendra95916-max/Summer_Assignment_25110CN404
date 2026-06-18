#include <bits/stdc++.h>
using namespace std;

void inputArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}
void selection_sort(int arr[], int n) {                           // select  minimum and swap
    for (int i = 0; i <= n - 2; i++) {
        int min = i;
        for (int j = i; j <= n - 1; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array: ";
    inputArray(arr, n);
    
    cout << "Array after selction sort :";
    selection_sort(arr, n);
    for (int i = 0;  i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
