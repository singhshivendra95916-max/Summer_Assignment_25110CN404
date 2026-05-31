#include <iostream>
using namespace std;

int main() {
    int n;
    int firstTerm = 0, secondTerm = 1, nextTerm;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; i++) {
        cout << firstTerm << " ";
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    return 0;
}