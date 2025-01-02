#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
void display() {
	cout << "******RAMEEN MUZAMMIL EJAZ******" << '\n';
	cout << "***SECTION A***" << '\n';
	cout << "***FA24-BSE-160***" << '\n';
	}
	//struct Size {
	//	int height;
	//	int width;
	//};
	struct ArtWork {
		string Artist;
		string title;
		int height;
		int width;
		string room;
		double price;
	};
	void getData(ArtWork allArtWorks[], int size) {
		allArtWorks[0] = { "Ali", "4 Seasons", 120, 0,"", 50.25 };
		allArtWorks[1] = { "Umar", "Beauty of C++", 144, 0,"" , 10.50 };
		allArtWorks[2] = { "Usman", "Advent of Java", 1000,0,"",100.00 };
		allArtWorks[3] = { "Usman", "Technology Impact on Economy", 180, 0,"",80.75 };
		allArtWorks[4] = { "Imran", "Books World", 50, 0,"" ,40.00 };
	}
	void printData(ArtWork allArtWorks[], int size) {
		cout << left << setw(30) << "Artist" << setw(30) << "Title" << setw(30) << "Size(in sqrt)" << setw(30) << "Price" << '\n';
		for (int i = 0; i < 120; i++) {
			cout << "-";
		}
        cout<<'\n';
		for (int i = 0; i < size; i++) {
			cout << left << setw(30) << allArtWorks[i].Artist << setw(30) << allArtWorks[i].title << setw(30) << (allArtWorks[i].height * allArtWorks[i].width) << "$" << fixed << setprecision(2) << setw(30) << allArtWorks[i].price << '\n';
		}
	}
	void input(ArtWork allArtWorks[], ArtWork orderCount[], int size) {
		string name;
		int totalItems = 0;
		double totalCost = 0;
		bool found = false;
		double totalPurchase = 0;
		do {
			char choice;
			cout << "Enter author's name, whose art work you want to buy: ";
			cin >> name;
			for (int i = 0; i < size; i++) {
				if (name == allArtWorks[i].Artist) {
					cout << "Artist:" << allArtWorks[i].Artist << '\n';
					cout << "Title:" << allArtWorks[i].title << '\n';
					found = true;
					cout << "Total Items:";
					cin >> totalItems;
					cout << '\n';
					totalCost = totalItems * allArtWorks[i].price;
					cout << "Total cost: " << totalCost << '\n';
					totalPurchase += totalCost;
					orderCount[i] = allArtWorks[i];
				}
			}
				if (!found) {
					cout << "No such a  Artist in artist list. You must try again!" << '\n';
				}
			cout << "Total Cost: " << totalPurchase << '\n';
			cout << "Do you want to continue (Y/N):";
			cin >> choice;
		} while (choice == 'y' || choice == 'Y');
	}
void displayPurchased(ArtWork allArtWorks[], ArtWork orderCount[], int size) {
		cout << left << setw(30) << "Artist" << setw(30) << "Title" << setw(30) << "Size(in sqrt)" << setw(30) << "Price" << '\n';
		for (int i = 0; i < size; i++) {
			if (orderCount[i] > 0) {
				cout << left << setw(30) << orderCount[i].Artist;
			}
        }
    }
int main() {
	const int size = 5;
	display();
	ArtWork allArtWorks[size];
	ArtWork orderCount[size];
	getData(allArtWorks, size);
	printData(allArtWorks, size);
	input(allArtWorks, orderCount, size);
    displayPurchased(allArtWorks, orderCount,size);
}
