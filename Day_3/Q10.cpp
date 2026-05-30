#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter start : ";            // entering range
    cin >> start;
    cout << "Enter end : ";
    cin >> end;

    cout << "Prime numbers from " << start << " to " << end << " is ";

    for (int i = start; i <= end; i++) {
        if (i < 2)
            continue;

        int flag = 0;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            cout << i << " ";
    }

    return 0;
}