#include <iostream>
#include <string>
using namespace std;
struct TimeStruct_t {
    int hours;
    int minutes;
    string timePeriod;
};
void display_time(TimeStruct_t &time) {
    cout<<"The updated time is : "<<time.hours<<":"<<(time.minutes<10? "0":"")<<time.minutes<<" "<<time.timePeriod;
}
TimeStruct_t getData(TimeStruct_t &time, updateHours, updateMinutes) {
    cout<<"Taking input from user: "<<'\n';
    cout<<"Enter hours between (1-12): ";
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
    return getData;
}
TimeStruct_t tic(TimeStruct_t time, int updateHours, int updateMinutes) {
    time.minutes+=1;
    if (time.minutes>=60) {
        time.minutes=0;
        time.hours+=1;
    }
    if (time.hours > 12) {
        time.hours=1;
        time.timePeriod = (time.timePeriod == "am") ? "pm" : "am";
    }
    if (time.hours == 12 ) {
        time.timePeriod = (time.timePeriod == "am") ? "pm" : "am";
            }
    return time;
        }

int main () {
    TimeStruct_t time;
    int updateHours = 0;
    int updateMinutes = 0
    getData(time, updateHours, updateMinutes);
    cout<<"You entered: ";
    display_time(time,updateHours, updateMinutes);
    time=tic(time);
    cout<<"After adding 1 minute: ";
    display_time(time);
}
