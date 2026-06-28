#include <iostream>
#include <string>
using namespace std;

struct Library {
    int bookId;
    string bookName;
    string author;
    bool available;
};

int main() {
    Library book[50];
    int n = 0, choice, id, i;
    bool found;

    do {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Issue Book";
        cout << "\n4. Return Book";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter Book ID: ";
            cin >> book[n].bookId;
            cin.ignore();

            cout << "Enter Book Name: ";
            getline(cin, book[n].bookName);

            cout << "Enter Author Name: ";
            getline(cin, book[n].author);

            book[n].available = true;
            n++;
            cout << "Book Added Successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No books available.\n";
            } else {
                for (i = 0; i < n; i++) {
                    cout << "\nBook ID: " << book[i].bookId;
                    cout << "\nBook Name: " << book[i].bookName;
                    cout << "\nAuthor: " << book[i].author;
                    cout << "\nStatus: ";
                    if (book[i].available)
                        cout << "Available";
                    else
                        cout << "Issued";
                    cout << "\n";
                }
            }
            break;

        case 3:
            cout << "Enter Book ID to Issue: ";
            cin >> id;
            found = false;

            for (i = 0; i < n; i++) {
                if (book[i].bookId == id) {
                    found = true;
                    if (book[i].available) {
                        book[i].available = false;
                        cout << "Book Issued Successfully.\n";
                    } else {
                        cout << "Book Already Issued.\n";
                    }
                }
            }

            if (!found)
                cout << "Book Not Found.\n";
            break;

        case 4:
            cout << "Enter Book ID to Return: ";
            cin >> id;
            found = false;

            for (i = 0; i < n; i++) {
                if (book[i].bookId == id) {
                    found = true;
                    if (!book[i].available) {
                        book[i].available = true;
                        cout << "Book Returned Successfully.\n";
                    } else {
                        cout << "Book Was Not Issued.\n";
                    }
                }
            }

            if (!found)
                cout << "Book Not Found.\n";
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