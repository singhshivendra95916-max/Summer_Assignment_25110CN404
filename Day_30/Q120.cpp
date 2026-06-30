// Restaurant Order Management System

#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

string customerName[MAX];
string foodName[MAX];
int quantity[MAX];
float price[MAX];
int count = 0;

void showMenu() {
    cout << "\n------ MENU ------\n";
    cout << "1. Burger   - Rs.120\n";
    cout << "2. Pizza    - Rs.250\n";
    cout << "3. Sandwich - Rs.100\n";
    cout << "4. Coffee   - Rs.80\n";
}

void placeOrder() {
    int choice;

    cout << "\nEnter Customer Name: ";
    cin.ignore();
    getline(cin, customerName[count]);

    showMenu();

    cout << "Choose Item (1-4): ";
    cin >> choice;

    cout << "Enter Quantity: ";
    cin >> quantity[count];

    switch (choice) {
        case 1:
            foodName[count] = "Burger";
            price[count] = 120;
            break;

        case 2:
            foodName[count] = "Pizza";
            price[count] = 250;
            break;

        case 3:
            foodName[count] = "Sandwich";
            price[count] = 100;
            break;

        case 4:
            foodName[count] = "Coffee";
            price[count] = 80;
            break;

        default:
            cout << "Invalid Item!\n";
            return;
    }

    count++;
    cout << "Order Placed Successfully.\n";
}

void displayOrders() {
    if (count == 0) {
        cout << "No Orders Available.\n";
        return;
    }

    cout << "\n------ ORDER DETAILS ------\n";

    for (int i = 0; i < count; i++) {
        cout << "\nCustomer : " << customerName[i] << endl;
        cout << "Food     : " << foodName[i] << endl;
        cout << "Quantity : " << quantity[i] << endl;
        cout << "Amount   : Rs." << price[i] * quantity[i] << endl;
    }
}

void totalBill() {
    float total = 0;

    for (int i = 0; i < count; i++) {
        total += price[i] * quantity[i];
    }

    cout << "\nTotal Bill = Rs." << total << endl;
}

int main() {

    int choice;

    do {
        cout << "\n===== RESTAURANT ORDER MANAGEMENT SYSTEM =====\n";
        cout << "1. Show Menu\n";
        cout << "2. Place Order\n";
        cout << "3. Display Orders\n";
        cout << "4. Total Bill\n";
        cout << "5. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            showMenu();
            break;

        case 2:
            placeOrder();
            break;

        case 3:
            displayOrders();
            break;

        case 4:
            totalBill();
            break;

        case 5:
            cout << "Thank You! Visit Again.\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}