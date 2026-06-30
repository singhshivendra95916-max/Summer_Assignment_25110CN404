#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX = 100;

    int roll[MAX];
    string name[MAX];
    float marks[MAX];

    int count = 0;
    int choice;

    do {
        cout << "\n===== Student Record System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by Roll Number\n";
        cout << "4. Update Student Record\n";
        cout << "5. Delete Student Record\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            if (count == MAX) {
                cout << "Record is full!\n";
            } else {
                cout << "Enter Roll Number: ";
                cin >> roll[count];

                cin.ignore();

                cout << "Enter Name: ";
                getline(cin, name[count]);

                cout << "Enter Marks: ";
                cin >> marks[count];

                count++;

                cout << "Student Record Added Successfully.\n";
            }
            break;

        case 2:
            if (count == 0) {
                cout << "No Records Found!\n";
            } else {
                cout << "\nStudent Records:\n";
                for (int i = 0; i < count; i++) {
                    cout << "\nStudent " << i + 1 << endl;
                    cout << "Roll Number : " << roll[i] << endl;
                    cout << "Name        : " << name[i] << endl;
                    cout << "Marks       : " << marks[i] << endl;
                }
            }
            break;

        case 3: {
            int r;
            bool found = false;

            cout << "Enter Roll Number to Search: ";
            cin >> r;

            for (int i = 0; i < count; i++) {
                if (roll[i] == r) {
                    cout << "\nRecord Found:\n";
                    cout << "Roll Number : " << roll[i] << endl;
                    cout << "Name        : " << name[i] << endl;
                    cout << "Marks       : " << marks[i] << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student Not Found!\n";

            break;
        }

        case 4: {
            int r;
            bool found = false;

            cout << "Enter Roll Number to Update: ";
            cin >> r;

            for (int i = 0; i < count; i++) {
                if (roll[i] == r) {
                    cin.ignore();

                    cout << "Enter New Name: ";
                    getline(cin, name[i]);

                    cout << "Enter New Marks: ";
                    cin >> marks[i];

                    cout << "Record Updated Successfully.\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student Not Found!\n";

            break;
        }

        case 5: {
            int r;
            bool found = false;

            cout << "Enter Roll Number to Delete: ";
            cin >> r;

            for (int i = 0; i < count; i++) {
                if (roll[i] == r) {
                    for (int j = i; j < count - 1; j++) {
                        roll[j] = roll[j + 1];
                        name[j] = name[j + 1];
                        marks[j] = marks[j + 1];
                    }

                    count--;
                    cout << "Record Deleted Successfully.\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student Not Found!\n";

            break;
        }

        case 6:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}