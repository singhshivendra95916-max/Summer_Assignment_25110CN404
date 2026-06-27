#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    float basicSalary;
    float hra;                      //house rent allowance
    float da;                       //dearness allowance
    float netSalary;
};

int main() {
    Employee emp[100];
    int count = 0;
    int choice;

    do {
        cout << "\n===== Salary Management System =====\n";
        cout << "1. Add Employee Salary Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Employee ID: ";
                cin >> emp[count].id;

                cout << "Enter Employee Name: ";
                cin.ignore();
                getline(cin, emp[count].name);

                cout << "Enter Basic Salary: ";
                cin >> emp[count].basicSalary;

                emp[count].hra = 0.20 * emp[count].basicSalary;
                emp[count].da = 0.10 * emp[count].basicSalary;
                emp[count].netSalary =
                    emp[count].basicSalary +
                    emp[count].hra +
                    emp[count].da;

                count++;

                cout << "Salary Record Added Successfully!\n";
                break;

            case 2:
                if (count == 0) {
                    cout << "No Records Found!\n";
                } else {
                    for (int i = 0; i < count; i++) {
                        cout << "\nEmployee ID: " << emp[i].id;
                        cout << "\nName: " << emp[i].name;
                        cout << "\nBasic Salary: " << emp[i].basicSalary;
                        cout << "\nHRA: " << emp[i].hra;
                        cout << "\nDA: " << emp[i].da;
                        cout << "\nNet Salary: " << emp[i].netSalary;
                        cout << "\n---------------------------\n";
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
                        cout << "\nEmployee Found\n";
                        cout << "ID: " << emp[i].id << endl;
                        cout << "Name: " << emp[i].name << endl;
                        cout << "Basic Salary: "
                             << emp[i].basicSalary << endl;
                        cout << "Net Salary: "
                             << emp[i].netSalary << endl;

                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Employee Not Found!\n";

                break;
            }

            case 4:
                cout << "Exiting salary management system...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}