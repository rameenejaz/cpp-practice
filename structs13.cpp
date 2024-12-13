#include <iostream>
using namespace std;
#include <string>
struct menuItemType{
    string menuItem;
    double menuPrice;
};
void getData(menuItemType menuList[]) {
    menuList[0]={"Plain Egg",1.45};
    menuList[1]={"Bacon and Egg",2.45};
    menuList[2]={"Muffin",0.99};
    menuList[3]={"French Toast",1.99};
    menuList[4]={"Fruit Basket", 2.49};
    menuList[5]={"Cereal",0.69};
    menuList[6]={"Coffee",0.50};
    menuList[7]={"Tea",0.75};
}
void showMenu(menuItemType menuList[], int size){
    cout << "****MENU****"<<'\n';
    for (int i=0; i<size; i++) {
        cout<<(i+1)<<":"<<menuList[i].menuItem<<" "<<"$"<<menuList[i].menuPrice<<'\n';
    }
}
void printCheck(const menuItemType menuList[], bool selectedItems[], int size) {
    cout<<"Welcome to Johnny's Restaurant: "<<'\n';
    float totalCost;
    for (int i=0; i<size; i++) {
        if (selectedItems[i]) {
        cout<<menuList[i].menuItem<<" "<<"$"<<menuList[i].menuPrice<<'\n';
        totalCost+=menuList[i].menuPrice;
    }
    }
    float tax=totalCost*(5.0/100);
    float amountDue=tax+totalCost;
    cout<<"Tax   $"<<tax<<'\n';
    cout<<"Amount Due   $"<<amountDue<<'\n';
}
int main () {  
    const int size=8; //number of items in the menu
    double totalCost=0; //total bill
    menuItemType menuList[size];
    bool selectedItems[size] = {false}; 
    getData(menuList);
    showMenu(menuList,size);
    char choice;
    do {
        int itemNumber;
        cout << "Enter the item number you want to order 1-8: ";
        cin >> itemNumber;
        if (itemNumber>=1 && itemNumber<=size) {
            selectedItems[itemNumber - 1] = true;
            cout << menuList[itemNumber - 1].menuItem << " has been added to your order"<<'\n';
        }
        else {
            cout<<"INVALID choice!!TRY AGAIN!";
        }
        cout<<"Would you like to add another item?(Enter Y or N): ";
        cin>>choice;
} while(choice=='y'||choice=='Y');
    printCheck(menuList, selectedItems, size);
}

