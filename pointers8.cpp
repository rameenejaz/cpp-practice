//to insert and display data entered using pointer notation
#include <iostream>
using namespace std;
int main () {
    double arr[5];
    //inserting data using pointer notation
    cout<<"Enter 5 numbers: ";
    for (int i=0; i<5; i++) {
        cin>>*(arr+i);
    }
    //displaying data using pointer notation
    for (int i=0; i<5; i++) {
        cout<<*(arr+i)<<'\n';
    }
}