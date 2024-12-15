#include <iostream>
#include <iomanip>
using namespace std;

struct menuItemType {
    string menuItem;
    double menuPrice;
};

void getData(menuItemType menuList[], int size) {
    menuList[0] = {"Plain Egg", 1.45};
    menuList[1] = {"Bacon and Egg", 2.45};
    menuList[2] = {"Muffin", 0.99};
    menuList[3] = {"French Toast", 1.99};
    menuList[4] = {"Fruit Basket", 2.49};
    menuList[5] = {"Cereal", 0.69};
    menuList[6] = {"Coffee", 0.50};
    menuList[7] = {"Tea", 0.75};
}

void showMenu(menuItemType menuList[], int size) {
    cout << "-------MENU-------\n";
    for (int i = 0; i < size; i++) {
        cout << (i + 1) << ". " << left << setw(20) << menuList[i].menuItem 
             << "$" << fixed << setprecision(2) << menuList[i].menuPrice << '\n';
    }
}

void printCheck(menuItemType menuList[], bool selectedItems[], int itemCounts[], int size) {
    cout << "\nYour Order:\n";
    double total = 0;

    for (int i = 0; i < size; i++) {
        if (selectedItems[i]) {
            double itemTotal = menuList[i].menuPrice * itemCounts[i];
            cout << itemCounts[i] << " x " << menuList[i].menuItem << " - $" << fixed << setprecision(2) << itemTotal << '\n';
            total += itemTotal;
        }
    }

    double tax = total * 0.05;
    double finalTotal = total + tax;

    cout << "Tax (5%): $" << fixed << setprecision(2) << tax << '\n';
    cout << "Total: $" << fixed << setprecision(2) << finalTotal << '\n';
}

int main() {
    const int size = 8;
    menuItemType menu[size];
    bool selectedItems[size] = {false};  // Tracks if an item has been selected
    int itemCounts[size] = {0};         // Tracks the number of times each item is selected

    getData(menu, size);
    showMenu(menu, size);

    char choice;
    do {
        int inputMenu;
        cout << "Enter the number of the item you want to order: ";
        cin >> inputMenu;

        if (inputMenu >= 1 && inputMenu <= size) {
            selectedItems[inputMenu - 1] = true;
            itemCounts[inputMenu - 1]++;
            cout << menu[inputMenu - 1].menuItem << " added to your order.\n";
        } else {
            cout << "Invalid selection! Please select a number between 1 and " << size << ".\n";
        }

        cout << "Would you like to order another item? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    printCheck(menu, selectedItems, itemCounts, size);

    return 0;
}
