#include <iostream>
#include <string>
using namespace std;
struct TimeStruct_t {
    int hours;
    int minutes;
    string timePeriod;
};
int main () {
    TimeStruct_t myTime;
    cout<<"Enter hours (1-12): ";
    cin>>myTime.hours;
    while(myTime.hours>12|| myTime.hours<=0) {
        cout<<"INVALID!!Enter hours between 0-12: ";
        cin.clear();
        cin.ignore();
        cin>>myTime.hours;
    }
    cout<<'\n';
    cout<<"Enter minutes (0-59): ";
    cin>>myTime.minutes;
    while(myTime.minutes>59 || myTime.minutes<0) {
        cout<<"INVALID!! Enter minutes between 0-59: ";
        cin.clear();
        cin.ignore();
        cin>>myTime.minutes;
    }
    cout<<'\n';
    cout<<"Enter time period(AM/PM): ";
    cin.ignore();
    getline(cin,myTime.timePeriod);
    while (myTime.timePeriod!="am" && myTime.timePeriod!="pm" && myTime.timePeriod!="AM" && myTime.timePeriod!="PM" && myTime.timePeriod!="Pm" && myTime.timePeriod!="Am") {
        cout<<"Invalid time period!!Enter time period in AM or PM: ";
        getline(cin,myTime.timePeriod);
    }
    cout<<"The initial time: "<<myTime.hours<<":"<<(myTime.minutes<10? "0":"")<<myTime.minutes<<" "<<myTime.timePeriod<<'\n';
    //to update time
    char choice;
    do {
        int updateHours=0;
        int updateMinutes=0;
        cout<<"Do you want update time (Enter Y/N): ";
        cin>>choice;
        if (choice=='y'|| choice=='Y') {
            cout<<"Enter hours (1-12) to update : ";
            cin>>updateHours;
            while (updateHours>12 || updateHours<=0) {
                cout<<"INVALID!!Enter hours between 0-12: ";
                cin.clear();
                cin.ignore();
                cin>>updateHours;
            }
            myTime.hours+=updateHours;
            while (myTime.hours>12) {
                myTime.hours-=12;
                myTime.timePeriod = (myTime.timePeriod == "am" || myTime.timePeriod == "AM") ? "pm" : "am";
            }
            // if (updateHours%12==0 && updateHours>0) {
            //     myTime.timePeriod = (myTime.timePeriod == "am" || myTime.timePeriod == "AM") ? "pm" : "am";
            // }
            cout<<"Enter minutes (0-59) to update: ";
            cin>>updateMinutes;
            myTime.minutes+=updateMinutes;
            while (myTime.minutes>59) {
                myTime.hours+=myTime.minutes/60;
                myTime.minutes%=60;
            }
            while (updateMinutes==60) {
                myTime.hours+=1;
                myTime.minutes=0;
            }
        }
        cout<<"The updated time: "<<myTime.hours<<":"<<(myTime.minutes<10? "0":"")<<myTime.minutes<<" "<<myTime.timePeriod<<'\n';
    }while(choice=='y'||choice=='Y');
}
