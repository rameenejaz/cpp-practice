#include <iostream>
using namespace std;
int main () {
    int day; 
    cout<<"Enter a number corresponding to the days of the week (1 for monday and so on): ";
    while (true) {
        cin>>day;   
    if (day>=1 && day<=7) {     
        break;
    }
    else {
        cout<<"Input is invalid, enter value again: ";
    }

}
switch (day) {
    case 1: cout<<"MONDAY"<<'\n';
    break;
    case 2: cout<<"TUESDAY"<<'\n';
    break;
    case 3: cout<<"WEDNESDAY"<<'\n';
    break;
    case 4: cout<<"THURSDAY"<<'\n';
    break;
    case 5: cout<<"FRIDAY"<<'\n';
    break;
    case 6: cout<<"SATURDAY"<<'\n';
    break;
    case 7: cout<<"SUNDAY"<<'\n';
    break;
    default: cout<<"ERROR!"<<'\n';
    break;
}

}