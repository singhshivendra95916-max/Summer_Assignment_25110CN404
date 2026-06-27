#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    float salary;
};

int main() {
    Employee emp[100];
    int count = 0;
    int choice;

    do {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Employee\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Employee ID: ";
                cin >> emp[count].id;

                cout << "Enter Employee Name: ";
                cin.ignore();
                getline(cin, emp[count].name);

                cout << "Enter Salary: ";
                cin >> emp[count].salary;

                count++;
                cout << "Employee Added Successfully!\n";
                break;

            case 2:
                if (count == 0) {
                    cout << "No Employee Records Found!\n";
                } else {
                    cout << "\nEmployee Records:\n";
                    for (int i = 0; i < count; i++) {
                        cout << "\nID: " << emp[i].id;
                        cout << "\nName: " << emp[i].name;
                        cout << "\nSalary: " << emp[i].salary << endl;
                    }
                }
                break;

            case 3: {
                int id;
                bool found = false;

                cout << "Enter Employee ID to Search: ";
                cin >> id;

                for (int i = 0; i < count; i++) {
                    if (emp[i].id == id) {
                        cout << "\nEmployee Found:\n";
                        cout << "ID: " << emp[i].id << endl;
                        cout << "Name: " << emp[i].name << endl;
                        cout << "Salary: " << emp[i].salary << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Employee Not Found!\n";

                break;
            }

            case 4: {
                int id;
                bool found = false;

                cout << "Enter Employee ID to Update: ";
                cin >> id;

                for (int i = 0; i < count; i++) {
                    if (emp[i].id == id) {
                        cout << "Enter New Name: ";
                        cin.ignore();
                        getline(cin, emp[i].name);

                        cout << "Enter New Salary: ";
                        cin >> emp[i].salary;

                        cout << "Employee Updated Successfully!\n";
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Employee Not Found!\n";

                break;
            }

            case 5: {
                int id;
                bool found = false;

                cout << "Enter Employee ID to Delete: ";
                cin >> id;

                for (int i = 0; i < count; i++) {
                    if (emp[i].id == id) {
                        for (int j = i; j < count - 1; j++) {
                            emp[j] = emp[j + 1];
                        }

                        count--;
                        found = true;
                        cout << "Employee Deleted Successfully!\n";
                        break;
                    }
                }

                if (!found)
                    cout << "Employee Not Found!\n";

                break;
            }

            case 6:
                cout << "Exiting employee's record management system...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}