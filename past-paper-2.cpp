//section b question
#include <iostream>
#include <string>
#include <iomanip>
#include<cmath>
#include<fstream>
using namespace std;
//part 1
void getNumber(int &number) {
    cout<<"Enter a number to find its divisors: ";
    cin>>number;
}
void divisor(int &number) {
    cout<<"The divisors of "<<number<<" are: ";
    for(int i=1; i<number; i++) {
        if(number%i==0) {
            cout<<i<<" ";
        }
    }
        cout<<'\n';
}
void askAgain(int &number) {
    char choice;
    bool found=false;
    do {
        cout<<"Do you want to enter another number? (Y/N): ";
        cin>>choice;
        if (choice=='y'||choice=='Y') {
            found=true;
            cout<<"Enter a number to find its divisors: ";
            cin>>number;
            divisor(number);
        }
        if(choice=='n' || choice=='N') {
            found=true;
        }
        if(!found) {
            cout<<"Invalid! Enter Y/N: ";
            cin>>choice;
        }
    }while(choice=='y' || choice=='Y');
}

//part 2
struct GroceryStore {
	string name;
	string category;
	string brandName;
	double price;
	int quantity;
	int pID;
};
void displayMenu(int& choice) {
	do {
		cout << "1: Enter product details:" << '\n';
		cout << "2: To update product price or quantity" << '\n';
		cout << "3:  " << '\n';
		cout << "4: Print the data in tabular form:" << '\n';
		cout << "5: Quit the program" << '\n';
		cout << "Enter choice 1-5: ";
		cin >> choice;
	} while (choice < 1 || choice>5);
}
void inputData(GroceryStore items[], int& numOfProd) {
	int counter = 1;
	for (int i = 0; i < numOfProd; i++) {
        cin.ignore();
		cout << "Enter details for product " << counter << '\n';
		items[i].pID = 100 + counter;
		cout << "Enter product " << counter << " name: ";
		getline(cin, items[i].name);
		cout << "Enter product " << counter << " category: ";
        getline(cin, items[i].category);
		cout << "Enter product " << counter << " brand name:";
		getline(cin, items[i].brandName);
		cout << "Enter product " << counter << " price: ";
		cin >> items[i].price;
		cout << "Enter product " << counter << " quanity: ";
		cin >> items[i].quantity;
		counter++;
	}
}
void updateData(GroceryStore items[],int& numOfProd) {
	char choice;
	int selectedProd = 0;
	int ID = 0;
	double newPrice = 0;
	int quantity = 0;
    bool found=false;
	do {
		cout << "Do you want to update price or quantity (Y/N): ";
		cin >> choice;
		if (choice == 'Y' || choice == 'y') {
			cout << "Enter P to update price or Q to update quantity: ";
			cin.clear();
			cin.ignore();
			cin >> choice;
			if (choice == 'p' || choice == 'P') {
				cout << "Enter product ID to update price: ";
				cin >> ID;
                for (int i=0; i<numOfProd; i++) {
                    if(items[i].pID==ID) {
                        found=true;
                        cout << "Enter price you want to update it to: ";
				        cin >> items[i].price;
                    }
            }
			}
			if (choice == 'q' || choice == 'Q') {
				cout << "Enter product ID to update quantity: ";
				cin >> ID;
                for(int i=0; i<numOfProd; i++) {
                    if(items[i].pID==ID) {
                    found=true;
                    cout << "Enter the quantity you want to update it to: ";
				    cin >> items[i].quantity;
                    }
                }
			}
		}
	} while (choice == 'y' || choice == 'Y');
	cout << "No update in price or quantity!" << '\n';
}
void displayOutput(GroceryStore items[], int& numOfProd) {
	cout << left << setw(30) << "Name" << setw(30) << "Category" << setw(30) << "Brand Name" << setw(30) << "Price" << setw(30) << "pID" << setw(30) << "Quantity" << '\n';
	for (int i = 0; i <= 170; i++) {
		cout << "-";
	}
	cout << '\n';
	for (int i = 0; i < numOfProd; i++) {
		cout << left << setw(30) << items[i].name << setw(30) << items[i].category << setw(30) << items[i].brandName << setw(30) << fixed << setprecision(2) << items[i].price << setw(30) << items[i].pID << setw(30) << items[i].quantity << '\n';
	}
	cout << '\n';
}
int main() {
    int input;
    cout<<"Enter 1 to execute Part 1 or 2 to execute Part 2: ";
    cin>>input;
    if(input==1) {
    //part 1
    int number;
    getNumber(number);
    divisor(number);
    askAgain(number);
    }
    //part 2 
    if (input==2) {
	const int maxSize = 10;
	GroceryStore item[maxSize];
	int choice;
	int numOfProd = 0;
	cout << "Enter the number of products you want to input data for: ";
	cin >> numOfProd;
		do {
			displayMenu(choice);
			switch (choice) {
			case 1:
				inputData(item, numOfProd);
				break;
			case 2:
				updateData(item, numOfProd);
				break;
			case 3:
				break;
			case 4:
				displayOutput(item, numOfProd);
				break;
			case 5:
				cout << "Program has been exited!" << '\n';
				break;
			}
		} while (choice != 5);
    }
    if(input!=1 || input!=2) {
        return;
    }
}