#include <iostream>
using namespace std;
void displayName() {
cout << "********************************************" << endl;
cout << "*** PROGRAMMING FUNDAMENTALS-LAB ***" << endl;
cout << "*** LAB WEEK 8 ***" << endl;
cout << "*** FA24-BSE-160 ***" << endl;
cout << "*** RAMEEN MUZAMMIL EJAZ ***" << endl;
cout << "********************************************" << endl;
}
void from24to12(int hours, int minutes) {
    string timeZone=(hours>=12)?"PM":"AM";
    if (hours>=12) { //afternoon
        hours-=12;

    }
    else if(hours==0) {
        hours=12;
    }
    else if (hours==12) {
        timeZone="PM";
    }
    cout<<"Time in 12 hour notation: "<<hours<<":"<<minutes<<timeZone;
}
void from12to24(int hours, int minutes, string period) {
    if (period=="AM") {
        if(hours==12) {
            hours=0;
        }
    }
    else if (period="PM") {
        if(hours<12) {
            hours+=12;
        }
    }
}
cout<<"Time in 24 hours notation: "<<<hours<<":"<<minutes<<'\n';
void displaychoices() {
    cout<<"Enter 'A' for conversion from 24 hours to 12 hours notation"<<'\n';
    cout<<"Enter 'B' for conversion from 12 hours to 24 hours notation"<<'\n';
}
void input24to12(int &hours, int &minutes,) {
    cout<<"Enter hours:";
    cin>>hours;
    cout<<"Enter minutes: ";
    cin>>minutes;
}


