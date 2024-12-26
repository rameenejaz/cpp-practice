#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct storeItemType {
    string itemName;
    double itemPrice;
};
void loadData(storeItemType items[], int size) {
    items[0]={"Fiction Book", 15.99};
    items[1]={"Non-fiction Book", 18.49};
    items[2]={"Notebook", 5.99};
    items[3]={"Pen-Pack", 2.99};
    items[4]={"Gift Card", 25.00};
}
void displayItems(storeItemType items[], int size) {
    cout<<"Welcome to the Local Bookstore!"<<'\n';
    cout<<"Items Available:"<<'\n';
    for(int i=0; i<5; i++) {
        cout<<left<<i+1<<"."<<setw(30)<<items[i].itemName<<"$"<<fixed<<setprecision(2)<<items[i].itemPrice<<'\n';
    }
}
void takeInput(storeItemType items[], bool selected[], int countOrder[] ,int size) {
    int input;
    char choice;
    do{
        cout<<"Enter numbers between (1-5) to choose a product (Enter -1 to finish):";
        cin>>input;
        if(input==-1) {
            return;
        }
        if(input<1 || input>5) {
            cout<<"INVALID!Enter numbers between (1-5) to choose a product (Enter -1 to finish): ";
            cin.ignore();
            cin.clear();
        }
        countOrder[input-1]++;
        cout<<items[input-1].itemName<<" has been added to cart!"<<'\n';
    } while(input!=-1);
}
void generateReciept(storeItemType items[], int countOrder[], int size) {
    float itemTotal=0;
    float amount=0;
    float discount=0;
    float totalBill=0;
    cout<<"---------------RECIEPT--------------"<<'\n';
    for(int i=0; i<size; i++) {
        if(countOrder[i]>0) {
            itemTotal=countOrder[i]*items[i].itemPrice;
            cout<<left<<setw(30)<<items[i].itemName<<"$"<<fixed<<setprecision(2)<<itemTotal<<'\n';
            amount+=itemTotal;
        }
    }
    cout<<left<<setw(30)<<"Subtital:" <<"$"<<fixed<<setprecision(2)<<amount<<'\n'; 
    if(amount>50) {
        discount=amount*(0.1);
    }
        cout<<left<<setw(30)<<"Discount Applied:" <<"$"<<fixed<<setprecision(2)<<discount<<'\n'; 
        cout<<left<<setw(30)<<"Total Amount Due" <<"$"<<fixed<<setprecision(2)<<(amount-discount)<<'\n'; 
}
int main () {
    const int size=8;
    storeItemType items[size];
    bool selected[size]={false};
    int countOrder[size]={0};
    loadData(items,size);
    displayItems(items,size);
    takeInput(items,selected,countOrder,size);
    generateReciept(items, countOrder,size);
}