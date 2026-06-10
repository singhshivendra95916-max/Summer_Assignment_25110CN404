#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Duplicate elements are: ";

    for (int i = 0; i < n; i++) {
        bool Duplicate = false;

        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                Duplicate = true;
                break;
            }
        }

        if (Duplicate)
            continue;

        for (int k = i + 1; k < n; k++) {
            if (arr[i] == arr[k]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }

    return 0;
}