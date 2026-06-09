#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements of array: ";
    cin >> n;

    int arr[100];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];

        if (arr[i] < smallest)
            smallest = arr[i];
    }

    cout << "Largest element of array = " << largest << endl;
    cout << "Smallest element of array = " << smallest << endl;

    return 0;
}