#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements array: ";
    cin >> n;

    int arr[100];
    int even = 0, odd = 0;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Number of even elements in array = " << even << endl;
    cout << "Number of odd elements in array = " << odd << endl;

    return 0;
}