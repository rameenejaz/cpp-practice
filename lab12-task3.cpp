#include <iostream>
#include <iostream>
#include <iomanip>
using namespace std;
struct menuItemType {
    string menuItem;
    double menuPrice;
};
//function to print name details
void displayName() {
cout << "********************************************" << endl;
cout << "*** PROGRAMMING FUNDAMENTALS-LAB ***" << endl;
cout << "*** LAB WEEK 12 ***" << endl;
cout << "*** FA24-BSE-160 ***" << endl;
cout << "*** RAMEEN MUZAMMIL EJAZ ***" << endl;
cout << "********************************************" << endl;
}
//function to assign data to the menu
void getData(menuItemType menuList[], int size) {
    menuList[0]={"Plain Egg",1.45};
    menuList[1]={"Bacon and Egg",2.45};
    menuList[2]={"Muffin",0.99};
    menuList[3]={"French Toast",1.99};
    menuList[4]={"Fruit Basket",2.49};
    menuList[5]={"Cereal",0.69};
    menuList[6]={"Coffee",0.50};
    menuList[7]={"Tea",0.75}; 
}
//function to print the menu
void showMenu (menuItemType menuList[], int size) {
    cout<<"-------MENU-------"<<'\n';
    for (int i=0; i<size; i++) {
        cout<<left<<(i+1)<<"."<<setw(20)<<menuList[i].menuItem<<right<<"$"<<fixed<<setprecision(2)<<menuList[i].menuPrice<<'\n';
    }
}
//function used to print the bill
void printCheck (menuItemType menuList[],int countItems[],bool selectedItems[] ,int size) {
    cout<<"-------YOUR ORDER:------- "<<'\n';
    cout<<"Welcome to Johnny's restaurant"<<'\n';
    float amountDue=0;
    double itemTotal=0;
    double totalPrice=0;
    for (int i=0; i<size; i++) {
        if (selectedItems[i]) {
            itemTotal=menuList[i].menuPrice*countItems[i];
            cout<<left<<setw(20)<<menuList[i].menuItem<<right<<"$"<<fixed<<setprecision(2)<<itemTotal<<'\n';
            amountDue+=itemTotal; 
        }
    }
    float tax=amountDue*(5.0/100);
    float totalCost=amountDue+tax;  
    cout<<left<<setw(20)<<"Tax:"<<right<<"$"<<fixed<<setprecision(2)<<tax<<'\n';
    cout<<left<<setw(20)<<"Amount Due:"<<right<<"$"<<fixed<<setprecision(2)<<totalCost<<'\n';
    
}
int main () {
    displayName();
    const int size=8;
    menuItemType menu[size];
    bool selectedItems[size]={false};
    int itemsCount[size]={0};
    getData(menu,size);
    showMenu(menu,size);
    char choice;
    do {
    int inputMenu=0;
        cout<<"Enter numbers between (1-8) to order: ";
        cin>>inputMenu;
        while (inputMenu>size || inputMenu<1) {
            cout<<"INVALID! Enter between 1-8:";
            cin.clear();
            cin.ignore();
            cin>>inputMenu;
        } 
        if (inputMenu>=1 && inputMenu<=size) {
            selectedItems[inputMenu-1]=true; //true for all the selected food items
            itemsCount[inputMenu-1]++;  //keeps the tally running if items are selected again
            cout<<menu[inputMenu-1].menuItem<<" has been added to your order."<<'\n';
        }
        cout<<"Do you want to add another item? (Y/N):";
        cin>>choice;
    }while(choice=='y'|| choice=='Y');
    printCheck(menu,itemsCount, selectedItems,size);
    cout<<"slayy, thanks for visiting :p"<<'\n';
    cout<<"sad day cuz second last lab :("<<'\n';
}
