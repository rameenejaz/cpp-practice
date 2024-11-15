#include <iostream>
#include <string>
using namespace std;
//to display the name table
void displayName() {
cout << "********************************************" << endl;
cout << "*** PROGRAMMING FUNDAMENTALS-LAB ***" << endl;
cout << "*** LAB WEEK 8 ***" << endl;
cout << "*** FA24-BSE-160 ***" << endl;
cout << "*** RAMEEN MUZAMMIL EJAZ ***" << endl;
cout << "********************************************" << endl;
}
// to convert from 24 to 12 hours
void from24to12(int hours, int minutes) {
    string timeZone;
    if (hours == 0) {
        hours = 12;
        timeZone = "AM";
    } else if (hours < 12) {
        timeZone = "AM";
    } else if (hours == 12) {
        timeZone = "PM";
    } else {
        hours -= 12; //example: if its 13:00 its 13-12= 1 PM
        timeZone = "PM";
    }
    cout << "Time in 12-hour notation is: " << hours << ":"<< (minutes<10? "0":"") <<minutes << timeZone << '\n';
}

// to convert from 12 to 24 hours
void from12to24(int hours, int minutes, string timeZone) {
    if (timeZone=="AM" || timeZone=="am") {
        if (hours==12) {
            hours=0; 
        }
    } 
    else if (timeZone == "PM" || timeZone=="pm") {
        if (hours<12) {
            hours=hours+12; 
        }
    }
    cout << "Time in 24-hour notation is: "<< (hours<10? "0":"") <<hours<< ":"<< (minutes<10? "0":"") <<minutes<< '\n';
}

// function to display the menu choices
void displayChoices() {
    cout << "Enter 'A' for conversion from 24 hours to 12 hours notation" << '\n';
    cout << "Enter 'B' for conversion from 12 hours to 24 hours notation" << '\n';
}

// to get input to convert from 24 to 12 hour
void inputFor24to12(int &hours, int &minutes) {
    cout << "Enter hours: ";
    cin >> hours;
    while(hours>24) { //if user enters time greater than 24
        cout<<"Invalid, enter a value between 0-24: ";
        cin>>hours;
    }
    cout << "Enter minutes: ";
    cin >> minutes;
    while(minutes>=60) { //for when minutes are greater than 60
        cout<<"Enter minutes less than 60: ";
        cin>>minutes; 
    }
}

// to get input to convert from 12 to 24 hour
void inputFor12to24(int &hours, int &minutes, string &period) {
    cout << "Enter hours: ";
    cin >> hours;
    while(hours>12) {
        cout<<"Invalid, enter a value between 0-12 ";
        cin>>hours;
    }
    cout << "Enter minutes: ";
    cin >> minutes;
    while(minutes>=60) { //for when minutes are greater than 60
        cout<<"Enter minutes less than 60: ";
        cin>>minutes; 
    }
    cout << "Enter AM/PM: ";
    cin >> period;
}

int main() {
    char choice;
    char inputAgain; // yes or no for input again
    displayName();
    do {
        displayChoices();
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 'a' || choice == 'A') {
            int hours; 
            int minutes;
            cout << "You have chosen the conversion from 24 hours to 12 hours notation" << '\n';
            inputFor24to12(hours, minutes);
            from24to12(hours, minutes);
        }
        else if (choice == 'b' || choice == 'B') {
            int hours, minutes;
            string period;
            cout << "You have chosen the conversion from 12 hours to 24 hours notation" << '\n';
            inputFor12to24(hours, minutes, period);
            from12to24(hours, minutes, period);
        }
        else {
            cout << "Invalid choice!Please enter either A or B!" << '\n';
            cin>>choice;
            }
        cout << "Do you want to perform another conversion, enter 'Y', (Enter 'N' for quit)";
        cin >> inputAgain;

    } while (inputAgain == 'Y' || inputAgain == 'y');
    cout << "Program has been terminated 😛" << '\n';

}
