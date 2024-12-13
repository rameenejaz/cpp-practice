#include <iostream>
#include <string>
using namespace std;
struct Book {
    int ID;
    string title;
    string author;
    bool isAvailable;
};
void displayBooks(Book books[], int size) {
    for (int i=0; i<size; i++) {
        cout<<"ID: "<<books[i].ID<<", Title:"<<books[i].title<<",Author: "<<books[i].author<<",Available: "<<(books[i].isAvailable ? "Yes":"No" )<<'\n';
    }
}
void getData (Book books[], int size) {
    for (int i=0; i<size; i++) {
        cout<<"For book "<<(i+1)<<'\n';
        cout<<"enter ID: ";
        cin>>books[i].ID;
        cin.ignore();
        cout<<'\n';
        cout<<"Enter title of book: ";
        getline(cin,books[i].title);
        cout<<'\n';
        cout<<"Enter the author: ";
        getline(cin,books[i].author);
        cout<<'\n';
        string input;
        cout<<"Enter yes or no if book is available: ";
        cin>>input;
        books[i].isAvailable=(input=="yes"||input=="Yes"||input=="YES");
        cout<<'\n';
    cout<<'\n';
}
}
int main () {
    int size=0;
    cout<<"Enter the size of array: ";
    cin>>size;
    Book bookList[size];
    getData(bookList,size);
    cout<<"The displayed data!"<<'\n';
    displayBooks(bookList,size);
}