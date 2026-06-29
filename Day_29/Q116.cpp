#include <iostream>
using namespace std;

struct Product {
    int id;
    string name;
    int quantity;
    float price;
};

int main() {
    Product p[100];
    int n, choice, id;
    bool found;

    cout << "Enter number of products: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Product " << i + 1 << endl;
        cout << "Product ID: ";
        cin >> p[i].id;
        cout << "Product Name: ";
        cin >> p[i].name;
        cout << "Quantity: ";
        cin >> p[i].quantity;
        cout << "Price: ";
        cin >> p[i].price;
    }

    do {
        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====\n";
        cout << "1. Display Products\n";
        cout << "2. Search Product\n";
        cout << "3. Update Quantity\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nProduct List\n";
            for (int i = 0; i < n; i++) {
                cout << "\nID: " << p[i].id;
                cout << "\nName: " << p[i].name;
                cout << "\nQuantity: " << p[i].quantity;
                cout << "\nPrice: " << p[i].price << endl;
            }
            break;

        case 2:
            cout << "Enter Product ID to search: ";
            cin >> id;
            found = false;

            for (int i = 0; i < n; i++) {
                if (p[i].id == id) {
                    cout << "\nProduct Found\n";
                    cout << "Name: " << p[i].name << endl;
                    cout << "Quantity: " << p[i].quantity << endl;
                    cout << "Price: " << p[i].price << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Product not found.\n";
            break;

        case 3:
            cout << "Enter Product ID: ";
            cin >> id;

            found = false;

            for (int i = 0; i < n; i++) {
                if (p[i].id == id) {
                    cout << "Enter new quantity: ";
                    cin >> p[i].quantity;
                    cout << "Quantity Updated Successfully.\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Product not found.\n";
            break;

        case 4:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}