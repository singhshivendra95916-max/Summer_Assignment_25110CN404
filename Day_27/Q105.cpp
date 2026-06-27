#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    Student s[100];
    int count = 0;
    int choice;

    do {
        cout << "\n===== Student Record Management System =====\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Search Student by Roll Number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "\nEnter Roll Number: ";
            cin >> s[count].rollNo;

            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, s[count].name);

            cout << "Enter Marks: ";
            cin >> s[count].marks;

            count++;
            cout << "Record Added Successfully!\n";
            break;

        case 2:
            if (count == 0) {
                cout << "No records found!\n";
            } else {
                cout << "\nStudent Records:\n";
                for (int i = 0; i < count; i++) {
                    cout << "\nRoll No: " << s[i].rollNo;
                    cout << "\nName: " << s[i].name;
                    cout << "\nMarks: " << s[i].marks << endl;
                }
            }
            break;

        case 3: {
            int roll;
            bool found = false;

            cout << "Enter Roll Number to Search: ";
            cin >> roll;

            for (int i = 0; i < count; i++) {
                if (s[i].rollNo == roll) {
                    cout << "\nRecord Found:\n";
                    cout << "Roll No: " << s[i].rollNo << endl;
                    cout << "Name: " << s[i].name << endl;
                    cout << "Marks: " << s[i].marks << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student Record Not Found!\n";

            break;
        }

        case 4:
            cout << "Exiting student's record management system...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}