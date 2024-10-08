#include <iostream>
using namespace std;
int main () {
    int numOfBooks;
int points;
cout<<"Enter the number of books you have purchased: ";
cin>>numOfBooks;
switch (numOfBooks) {
    case 0:
    cout<<"You have earned 0 points";
    break;
    case 1: 
    cout<<"You have earned 5 points";
    break;
    case 2:
    cout<<"You have earned 15 points";
    break;
    case 3:
    cout<<"You have earned 30 points";
    break;
    default: 
    cout<<"You have earned 60 points";
    break;
}
}