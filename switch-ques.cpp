#include <iostream>
using namespace std;
int main () {
//lab task 1
int number;
cout<<"Enter a number: ";
cin>>number;
switch ((number>0) - (number<0)) {
    case 1: 
    cout<<"You have entered a positive number"<<'\n';
    break;
    case -1:
    cout<<"You have entered a negative number "<<'\n';
    break;
    case 0:
    cout<<"You have entered zero"<<'\n';
    break;
}
}