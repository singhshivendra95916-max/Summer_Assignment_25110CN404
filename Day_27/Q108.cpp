#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    string name;
    int marks[5];
    int total;
    float percentage;
    char grade;
};

int main() {
    Student s;

    cout << "===== Marksheet Generation System =====\n";

    cout << "Enter Roll Number: ";
    cin >> s.rollNo;

    cout << "Enter Student Name: ";
    cin.ignore();
    getline(cin, s.name);

    s.total = 0;

    cout << "\nEnter marks of 5 subjects:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> s.marks[i];
        s.total += s.marks[i];
    }

    s.percentage = s.total / 5.0;

    if (s.percentage >= 90)
        s.grade = 'A';
    else if (s.percentage >= 75)
        s.grade = 'B';
    else if (s.percentage >= 60)
        s.grade = 'C';
    else if (s.percentage >= 40)
        s.grade = 'D';
    else
        s.grade = 'F';

    cout << "\n========== MARKSHEET ==========\n";
    cout << "Roll Number : " << s.rollNo << endl;
    cout << "Name        : " << s.name << endl;

    cout << "\nMarks:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << " : "
             << s.marks[i] << endl;
    }

    cout << "\nTotal Marks : " << s.total << endl;
    cout << "Percentage  : " << s.percentage << "%" << endl;
    cout << "Grade       : " << s.grade << endl;

    if (s.grade != 'F')
        cout << "Result      : Pass\n";
    else
        cout << "Result      : Fail\n";

    return 0;
}