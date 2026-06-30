#include <iostream>
#include <string>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
};

int main() {
    const int MAX = 50;
    Book book[MAX];

    int count = 0, choice;

    do {
        cout << "\n===== MINI LIBRARY SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Book ID: ";
            cin >> book[count].id;

            cin.ignore();

            cout << "Enter Book Title: ";
            getline(cin, book[count].title);

            cout << "Enter Author Name: ";
            getline(cin, book[count].author);

            count++;

            cout << "Book Added Successfully.\n";
            break;

        case 2:
            if (count == 0) {
                cout << "No Books Available.\n";
            } else {
                cout << "\n----- Book Records -----\n";

                for (int i = 0; i < count; i++) {
                    cout << "\nBook " << i + 1 << endl;
                    cout << "Book ID : " << book[i].id << endl;
                    cout << "Title   : " << book[i].title << endl;
                    cout << "Author  : " << book[i].author << endl;
                }
            }
            break;

        case 3: {
            int id;
            bool found = false;

            cout << "Enter Book ID to Search: ";
            cin >> id;

            for (int i = 0; i < count; i++) {
                if (book[i].id == id) {
                    cout << "\nBook Found\n";
                    cout << "Book ID : " << book[i].id << endl;
                    cout << "Title   : " << book[i].title << endl;
                    cout << "Author  : " << book[i].author << endl;

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found.\n";

            break;
        }

        case 4:
            cout << "Exiting Library System...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}