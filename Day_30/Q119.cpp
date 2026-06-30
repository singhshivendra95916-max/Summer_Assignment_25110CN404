#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    float salary;
};

int main() {
    const int MAX = 50;
    Employee emp[MAX];

    int count = 0, choice;

    do {
        cout << "\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Employee ID: ";
            cin >> emp[count].id;

            cin.ignore();

            cout << "Enter Employee Name: ";
            getline(cin, emp[count].name);

            cout << "Enter Salary: ";
            cin >> emp[count].salary;

            count++;
            cout << "Employee Added Successfully.\n";
            break;

        case 2:
            if (count == 0) {
                cout << "No Employee Records.\n";
            } else {
                for (int i = 0; i < count; i++) {
                    cout << "\nEmployee " << i + 1 << endl;
                    cout << "ID     : " << emp[i].id << endl;
                    cout << "Name   : " << emp[i].name << endl;
                    cout << "Salary : " << emp[i].salary << endl;
                }
            }
            break;

        case 3: {
            int id;
            bool found = false;

            cout << "Enter Employee ID: ";
            cin >> id;

            for (int i = 0; i < count; i++) {
                if (emp[i].id == id) {
                    cout << "\nEmployee Found\n";
                    cout << "ID     : " << emp[i].id << endl;
                    cout << "Name   : " << emp[i].name << endl;
                    cout << "Salary : " << emp[i].salary << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found.\n";

            break;
        }

        case 4:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}