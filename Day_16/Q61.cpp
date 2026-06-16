#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n (1 to n) : ";
    cin >> n;   // size of array = n-1

    int arr[n - 1];

    int actualSum = 0;

    cout << "Enter array element : ";

    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
        actualSum += arr[i];
    }

    int expectedSum = (n) * (n + 1) / 2;

    cout << "Missing number = " << expectedSum - actualSum;

    return 0;
}