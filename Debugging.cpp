#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Menu Options\n";
    cout << "1. Add Item\n";
    cout << "2. View Items\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Item added successfully.\n";
    }
    else if (choice == 2) {
        cout << "Here are the items.\n";
    }
    else if (choice == 3) {
        cout << "Exiting the program.\n";
    }
    else {
        cout << "Invalid option selected.\n";
    }

    return 0;
}
/*
 Menu Options
 1. Add Item
 2. View Items
 3. Exit
 Enter your choice: 2
 Here are the items.
 Program ended with exit code: 0
 */
