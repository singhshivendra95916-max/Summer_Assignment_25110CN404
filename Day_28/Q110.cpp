#include <iostream>
#include <string>
using namespace std;

struct Bank {
    int accNo;
    string name;
    float balance;
};

int main() {
    Bank acc[50];
    int n = 0, choice, no, i;
    float amount;
    bool found;

    do {
        cout << "\n===== BANK ACCOUNT SYSTEM =====";
        cout << "\n1. Create Account";
        cout << "\n2. Deposit Money";
        cout << "\n3. Withdraw Money";
        cout << "\n4. Display Accounts";
        cout << "\n5. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Account Number: ";
            cin >> acc[n].accNo;
            cin.ignore();

            cout << "Enter Account Holder Name: ";
            getline(cin, acc[n].name);

            cout << "Enter Initial Balance: ";
            cin >> acc[n].balance;

            n++;
            cout << "Account Created Successfully!\n";
            break;

        case 2:
            cout << "Enter Account Number: ";
            cin >> no;
            found = false;

            for (i = 0; i < n; i++) {
                if (acc[i].accNo == no) {
                    found = true;
                    cout << "Enter Deposit Amount: ";
                    cin >> amount;
                    acc[i].balance += amount;
                    cout << "Money Deposited Successfully!\n";
                }
            }

            if (!found)
                cout << "Account Not Found!\n";
            break;

        case 3:
            cout << "Enter Account Number: ";
            cin >> no;
            found = false;

            for (i = 0; i < n; i++) {
                if (acc[i].accNo == no) {
                    found = true;
                    cout << "Enter Withdrawal Amount: ";
                    cin >> amount;

                    if (amount <= acc[i].balance) {
                        acc[i].balance -= amount;
                        cout << "Withdrawal Successful!\n";
                    } else {
                        cout << "Insufficient Balance!\n";
                    }
                }
            }

            if (!found)
                cout << "Account Not Found!\n";
            break;

        case 4:
            if (n == 0) {
                cout << "No Accounts Available.\n";
            } else {
                for (i = 0; i < n; i++) {
                    cout << "\nAccount Number: " << acc[i].accNo;
                    cout << "\nName: " << acc[i].name;
                    cout << "\nBalance: " << acc[i].balance << endl;
                }
            }
            break;

        case 5:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}