#include <iostream>
#include <string>
using namespace std;

struct Ticket {
    int ticketNo;
    string name;
    string destination;
    bool booked;
};

int main() {
    Ticket t[50];
    int n = 0, choice, no, i;
    bool found;

    do {
        cout << "\n===== TICKET BOOKING SYSTEM =====";
        cout << "\n1. Book Ticket";
        cout << "\n2. View Booked Tickets";
        cout << "\n3. Cancel Ticket";
        cout << "\n4. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Ticket Number: ";
            cin >> t[n].ticketNo;
            cin.ignore();

            cout << "Enter Passenger Name: ";
            getline(cin, t[n].name);

            cout << "Enter Destination: ";
            getline(cin, t[n].destination);

            t[n].booked = true;
            n++;

            cout << "Ticket Booked Successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No Tickets Booked.\n";
            } else {
                for (i = 0; i < n; i++) {
                    if (t[i].booked) {
                        cout << "\nTicket No: " << t[i].ticketNo;
                        cout << "\nPassenger Name: " << t[i].name;
                        cout << "\nDestination: " << t[i].destination;
                        cout << "\nStatus: Booked\n";
                    }
                }
            }
            break;

        case 3:
            cout << "Enter Ticket Number to Cancel: ";
            cin >> no;
            found = false;

            for (i = 0; i < n; i++) {
                if (t[i].ticketNo == no && t[i].booked) {
                    t[i].booked = false;
                    found = true;
                    cout << "Ticket Cancelled Successfully!\n";
                    break;
                }
            }

            if (!found)
                cout << "Ticket Not Found!\n";
            break;

        case 4:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}