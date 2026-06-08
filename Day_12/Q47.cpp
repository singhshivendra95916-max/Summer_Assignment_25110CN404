#include <iostream>
using namespace std;

void fibonacciSeries(int n) {
    int firstTerm = 0, secondTerm = 1, nextTerm;

    for (int i = 1; i <= n; i++) {
        cout << firstTerm << " ";
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }
}

int main() {
    int n;

    cout << "Enter number of terms: ";
    cin >> n;

    fibonacciSeries(n);

    return 0;
}