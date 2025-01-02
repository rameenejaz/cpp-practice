//structs task 3
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct menuItemType{
    string menuItem;
    double menuPrice;
};
void getData(menuItemType menuList[]) {
    menuList[0]={"Plain Egg", 1.45};
    menuList[1]={"Bacon and Egg", 2.45};
    menuList[2]={"Muffin", 0.99};
    menuList[3]={"French Toast", 1.99};
    menuList[4]={"Fruit Basket", 2.49};
    menuList[5]={"Cereal",0.69};
    menuList[6]={"Coffee", 0.50};
    menuList[7]={"Tea", 0.75};
}
void showMenu(menuItemType menuList[],int size) {
    cout<<"Welcome to Johnny's Restaurant"<<'\n';
    for(int i=0; i<size; i++) {
        cout<<left<<i+1<<"."<<setw(30)<<menuList[i].menuItem<<fixed<<setprecision(2)<<"$"<<setw(30)<<menuList[i].menuPrice<<'\n';
    }
}
void takeInput(menuItemType menuList[],menuItemType selectedItem[],int orderCount[] ,bool selected[], int size) {
    int selectedIndex=0;
    int input=0;
    char choice;
    do {
        cout<<"Enter number (1-8) to order: ";
        cin>>input;
        while(input<1 || input>8) {
            //selected=false;
            cout<<"INVALID!! Enter value between 1-7: ";
            cin.clear();
            cin.ignore();
            cin>>input;
        }
        if(input>=1 && input<=8) {
            selected[input-1]=true; //bool is true for selected product
            selectedItem[selectedIndex]=menuList[input-1];
            orderCount[input-1]++; //quantity of item selected
            cout<<selectedItem[selectedIndex].menuItem<<" has been added to your cart!"<<'\n';
            selectedIndex++; //increment to move onto the next element of selectedItem
        }
    cout<<"Do you want to add another item? (Y/N):";
    cin>>choice;
    } while(choice=='y'|| choice=='Y');
}
void printCheck(menuItemType menuList[],int orderCount[] ,bool selected[], int size) {
    float amount=0;
    float totalTax=0;
    float totalBill=0;
    float itemPrice=0;
    cout<<"-----------------BILL-----------------"<<'\n';
    for(int i=0; i<size; i++) {
        if(selected[i]) { //when bool is true, item has been selected
        itemPrice=menuList[i].menuPrice*orderCount[i]; //multiply the price by quantity
        cout<<left<<setw(30)<<menuList[i].menuItem<<fixed<<setprecision(2)<<"$"<<setw(30)<<itemPrice<<'\n';
        amount+=itemPrice;
        }
    }
    totalTax=amount*0.05; //finding the total tax which is 5/100
    totalBill=amount+totalTax; //adding the total tax in the amount to find the total bill
    cout<<left<<setw(30)<<"Tax (5%)"<<fixed<<setprecision(2)<<"$"<<setw(30)<<totalTax<<'\n';
    cout<<left<<setw(30)<<"Amount Due"<<fixed<<setprecision(2)<<"$"<<setw(30)<<totalBill<<'\n';
}

int main () {
    const int size=8;
    menuItemType items[size];
    menuItemType selected[size];
    bool selectedItems[size]={false};
    int orderCount[size]={0};
    getData(items);
    showMenu(items,size);
    takeInput(items, selected,orderCount ,selectedItems,size);
    printCheck(items,orderCount ,selectedItems, size);
}



//GPT code:
// #include <iostream>
// #include <string>
// #include <iomanip>
// using namespace std;

// struct menuItemType {
//     string menuItem;
//     double menuPrice;
// };

// void getData(menuItemType menuList[]) {
//     menuList[0] = {"Plain Egg", 1.45};
//     menuList[1] = {"Bacon and Egg", 2.45};
//     menuList[2] = {"Muffin", 0.99};
//     menuList[3] = {"French Toast", 1.99};
//     menuList[4] = {"Fruit Basket", 2.49};
//     menuList[5] = {"Cereal", 0.69};
//     menuList[6] = {"Coffee", 0.50};
//     menuList[7] = {"Tea", 0.75};
// }

// void showMenu(menuItemType menuList[], int size) {
//     cout << "Welcome to Johnny's Restaurant" << '\n';
//     for (int i = 0; i < size; i++) {
//         cout << left << i + 1 << ". " << setw(30) << menuList[i].menuItem
//              << fixed << setprecision(2) << "$" << menuList[i].menuPrice << '\n';
//     }
// }

// void takeInput(menuItemType menuList[], int orderCount[], int size) {
//     int input = 0;
//     char choice;

//     do {
//         cout << "Enter number (1-8) to order: ";
//         cin >> input;

//         while (input < 1 || input > 8) {
//             cout << "INVALID!! Enter value between 1-8: ";
//             cin.clear();
//             cin.ignore(1000, '\n');
//             cin >> input;
//         }

//         orderCount[input - 1]++; // Increment the quantity of the selected item
//         cout << menuList[input - 1].menuItem << " has been added to your cart!" << '\n';

//         cout << "Do you want to add another item? (Y/N): ";
//         cin >> choice;
//     } while (choice == 'y' || choice == 'Y');
// }

// void printCheck(menuItemType menuList[], int orderCount[], int size) {
//     double subtotal = 0.0;
//     double taxRate = 0.05;

//     cout << "-----------------BILL-----------------" << '\n';

//     for (int i = 0; i < size; i++) {
//         if (orderCount[i] > 0) {
//             double itemTotal = menuList[i].menuPrice * orderCount[i];
//             cout << left << setw(30) << menuList[i].menuItem
//                  << fixed << setprecision(2) << "$" << itemTotal << '\n';
//             subtotal += itemTotal;
//         }
//     }

//     double tax = subtotal * taxRate;
//     double total = subtotal + tax;

//     cout << left << setw(30) << "Tax (5%)" << "$" << fixed << setprecision(2) << tax << '\n';
//     cout << left << setw(30) << "Amount Due" << "$" << fixed << setprecision(2) << total << '\n';
// }

// int main() {
//     const int size = 8;
//     menuItemType items[size];
//     int orderCount[size] = {0};

//     getData(items);
//     showMenu(items, size);
//     takeInput(items, orderCount, size);
//     printCheck(items, orderCount, size);

//     return 0;
// }
