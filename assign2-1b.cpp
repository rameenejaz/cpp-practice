#include <iostream>
using namespace std;
int main () {
    int day; //a variable used to store the entered day value
    cout<<"Enter a number corresponding to the days of the week (1 for monday and so on): "; //prompt user to enter a value for day
    
    //this is an input validation loop
    while (true) {
        cin>>day;   
    if (day>=1 && day<=7) {     
        break;
    }
    else {
        cout<<"Input is invalid, enter value again: "; //when an invalid value is entered, take an input again
    }

}
switch (day) {
    case 1: cout<<"Day of the week: MONDAY"<<'\n';
    break;
    case 2: cout<<"Day of the week: TUESDAY"<<'\n';
    break;
    case 3: cout<<"Day of the week: WEDNESDAY"<<'\n';
    break;
    case 4: cout<<"Day of the week: THURSDAY"<<'\n';
    break;
    case 5: cout<<"Day of the week: FRIDAY"<<'\n';
    break;
    case 6: cout<<"Day of the week: SATURDAY"<<'\n';
    break;
    case 7: cout<<"Day of the week: SUNDAY"<<'\n';
    break;
    default: cout<<"ERROR!"<<'\n';  //this will never be executed as an input validation loop is being used
    break;
}

}