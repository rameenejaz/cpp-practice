#include <iostream>
using namespace std;
#include <string>
struct TimeStruct_t {
    int hours;
    int minutes;
    string timePeriod;
};
int main () {
    int updateHours=0;
    int updateMins=0;
    TimeStruct_t time;
    //lab task 1
    cout<<"***LAB TASK 1***"<<'\n';
    //cout<<time.hours<<":"<<(time.minutes<10? "0":"") <<time.minutes<<" "<<time.timePeriod<<'\n';
    cout<<"Taking input from user: "<<'\n';
    cout<<"Enter hours between (0-12): ";
    cin>>time.hours;
    while (time.hours>12 ||time.hours<1) {
        cout<<"Invalid hours, enter time between (0-12) ";
        cin>>time.hours;
    }
    // cout<<'\n';
    cout<<"Enter minutes between (0-59): ";
    cin>>time.minutes;
    while (time.minutes<0 || time.minutes>59) {
        cout<<"INVALID!! Enter time between (0-59): ";
        cin>>time.minutes;
    }
    cout<<"Enter the time period (AM/PM):";
    cin>>time.timePeriod;
    while (time.timePeriod!="am" && time.timePeriod!="pm" && time.timePeriod!="PM" &&time.timePeriod!="AM") {
        cout << "Invalid input! Enter the time period (AM/PM): ";
        cin >> time.timePeriod;
    }
    cout<<'\n';
    cout<<"Enter hours to update: ";
    cin>>updateHours;
    cout<<"Enter minutes to update: ";
    cin>>updateMins;
    time.hours+=updateHours;
    if (time.hours>12) {
        time.hours-=12;
        time.timePeriod = (time.timePeriod == "am") ? "pm" : "am";
    }
    if (time.hours==12 && updateHours>0) {
        time.timePeriod = (time.timePeriod == "am") ? "pm" : "am";
    }
    time.minutes+=updateMins;
    if (time.minutes>=60) {
        time.minutes-=60;
        time.hours+=1;
    }
    cout<<"The updated time is : "<<time.hours<<":"<<(time.minutes<10? "0":"")<<time.minutes<<" "<<time.timePeriod;
}
