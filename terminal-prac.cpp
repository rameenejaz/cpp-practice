#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
struct productType{
    int productNumber;
    string productName;
    double retailPrice;
    int quantity;
};
void storeData(productType products[]) {
        products[0]={101,"Soap",60.00,10};
        products[1]={102,"Liquid Hand Wash",200.00,20};
        products[2]={103,"Liquid Dish Wash",150.00,30};
        products[3]={104,"Table cleaner",350.00,40};
        products[4]={105,"Hand Sanitizer",100.00,50};
}
void outputData(productType products[]) {
    cout<<left<<setw(20)<<"Product Number"<<setw(30)<<"Product Name"<<setw(30)<<"Retail Price in Rs."<<setw(30)<<"Quantity"<<right<<'\n';
    for(int i=0; i<5; i++) {
    cout<<left<<setw(20)<<products[i].productNumber<<setw(30)<<products[i].productName<<setw(30)<<fixed<<setprecision(2)<<products[i].retailPrice<<setw(30)<<products[i].quantity<<right<<'\n';
    }
    cout<<'\n';
}
void getData(productType products[], productType selectedProduct[],int &selectedCount) {
    int quantity;
    int counter=1;
    int numOfProducts;
    int productNum;
    bool isSelected=false;
    cout<<"Enter the number of products you want to purchase:"<<'\n'<<"NOTE: You can only purchase at most 5 products: ";
    cin>>numOfProducts;
    while (numOfProducts>5 || numOfProducts<=0) {
        cout<<"Error! select number between 1-5:";
        cin.clear();
        cin.ignore();
        cin>>numOfProducts;
    }
        for(int i=0; i<numOfProducts; i++) {
            cout<<"Enter "<<counter<<" product number: ";
            cin>>productNum;
            isSelected=false;
            for (int j=0; j<5; j++) {
                if (products[j].productNumber==productNum) {
                    isSelected=true;
                    cout<<"Enter the quantity:";
                    cin>>quantity;
                    if(quantity>products[j].quantity) {
                        cout<<"insuffiecent stock to complete order  "<<products[j].productNumber<<'\n';
                        quantity=products[j].quantity;
                        if(quantity>0) {
                        cout<<"Adding max quantity ("<<products[j].quantity<<") available to order"<<'\n';
                        selectedProduct[selectedCount]=products[j];
                        selectedProduct[selectedCount].quantity=quantity;
                        products[j].quantity=0;
                        selectedCount++;
                        }
                    }
                    else {
                        products[j].quantity-=quantity;
                        selectedProduct[selectedCount]=products[j];
                        selectedProduct[selectedCount].quantity=quantity;
                        if(selectedProduct[selectedCount].quantity==0) {
                            cout<<"No items were purchased. The bill was zero."<<'\n';
                        }
                        selectedCount++;
                        cout<<"Order placed successfully for "<<products[j].productName<<'\n';
                        counter++;
                    }
                    break;
                }
            }
            if(!isSelected) {
                cout<<"Invalid product number! Try again!"<<'\n';
                i--;
            }
    }
    }
    void outputSelectedData(productType products[],productType selected[], int &selectedCount) {
        if (selectedCount==0) {
            cout<<"No items were selected"<<'\n';
            return;
        }
        double totalBill=0;
        char choice;
        int amount=0;
        cout<<left<<setw(20)<<"Product No. "<<setw(30)<<"Product Name"<<setw(30)<<"Retail Price in Rs:"<<setw(20)<<"Quantity"<<setw(20)<<"Amount"<<'\n';
        do {  
            totalBill=0;
            for (int i=0; i<selectedCount; i++) {
            amount=(selected[i].retailPrice*selected[i].quantity);
            cout<<left<<setw(20)<<selected[i].productNumber<<setw(30)<<selected[i].productName<<setw(30)<<selected[i].retailPrice<<setw(20)<<selected[i].quantity<<setw(20)<<amount<<'\n';
            totalBill+=amount;
            
        }
        cout<<"Total Bill= Rs "<<fixed<<setprecision(2)<<totalBill<<'\n';
        totalBill=0;
        cout<<"Enter 'Y' to continue shopping or any other key to exit:";
        cin>>choice;
        if(choice=='y' || choice=='Y') {
            outputData(products);
            getData(products,selected,selectedCount);
        }
        } while(choice=='y'||choice=='Y');
        cout<<"Thank you for shopping!"<<'\n';
    }
int main () {
    const int size=5;
    int selectedCount=0;
    productType product[size];
    productType selectedProduct[size];
    storeData(product);
    cout<<"Displaying the options:"<<'\n';
    outputData(product);
    getData(product,selectedProduct,selectedCount);
    outputSelectedData(product, selectedProduct,selectedCount);
    
}
