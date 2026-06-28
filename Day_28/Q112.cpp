#include <iostream>
#include <string>
using namespace std;

struct Contact {
    int id;
    string name;
    string phone;
};

int main() {
    Contact c[50];
    int n = 0, choice, id, i;
    bool found;

    do {
        cout << "\n===== CONTACT MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Contact";
        cout << "\n2. Display Contacts";
        cout << "\n3. Search Contact";
        cout << "\n4. Delete Contact";
        cout << "\n5. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Contact ID: ";
            cin >> c[n].id;
            cin.ignore();

            cout << "Enter Name: ";
            getline(cin, c[n].name);

            cout << "Enter Phone Number: ";
            getline(cin, c[n].phone);

            n++;
            cout << "Contact Added Successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No Contacts Available.\n";
            } else {
                for (i = 0; i < n; i++) {
                    cout << "\nContact ID: " << c[i].id;
                    cout << "\nName: " << c[i].name;
                    cout << "\nPhone: " << c[i].phone << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Contact ID to Search: ";
            cin >> id;
            found = false;

            for (i = 0; i < n; i++) {
                if (c[i].id == id) {
                    cout << "\nContact Found";
                    cout << "\nName: " << c[i].name;
                    cout << "\nPhone: " << c[i].phone << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Contact Not Found!\n";
            break;

        case 4:
            cout << "Enter Contact ID to Delete: ";
            cin >> id;
            found = false;

            for (i = 0; i < n; i++) {
                if (c[i].id == id) {
                    for (int j = i; j < n - 1; j++) {
                        c[j] = c[j + 1];
                    }
                    n--;
                    found = true;
                    cout << "Contact Deleted Successfully!\n";
                    break;
                }
            }

            if (!found)
                cout << "Contact Not Found!\n";
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