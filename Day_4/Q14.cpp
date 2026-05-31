#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int firstTerm = 0, secondTerm = 1, nextTerm;

    if (n == 1) {
        cout << "1st term of Fibonacci series is " << firstTerm;
    }
    else if (n == 2) {
        cout << "2nd term of Fibonacci series is " << secondTerm;
    }
    else {
        for (int i = 3; i <= n; i++) {
            nextTerm = firstTerm + secondTerm;
            firstTerm = secondTerm;
            secondTerm = nextTerm;
        }
        cout << n<< "th term of Fibonacci series is " << secondTerm;
    }

    return 0;
}