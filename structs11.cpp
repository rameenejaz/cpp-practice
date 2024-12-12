#include <iostream>
using namespace std;
#include <string>
struct TimeStruct_t {
    int hours;
    int minutes;
    string timePeriod;
};
int main () {
    //lab task 1
    TimeStruct_t time ={3,49,"pm"};
    cout<<time.hours<<":"<<(time.minutes<10? "0":"") <<time.minutes<<" "<<time.timePeriod<<'\n';
    cout<<"Taking input from user: "<<'\n';
    cout<<"Enter hours between (0-23): ";
    cin>>time.hours;
    if (time.hours>=0 && time.hours<12) {
        time.timePeriod="am";
        if (time.hours==0){
            time.hours=12;
        }
    }
    else {
        if (time.hours>12) {
            time.hours=time.hours-12;
            time.timePeriod="pm";
        }
    }
    while (time.hours>24) {
        cout<<"Invalid hours, enter time between (0-24) ";
        cin>>time.hours;
    }
    cout<<'\n';
    cout<<"Enter minutes between (0-59): ";
    cin>>time.minutes;
    while (time.minutes<0 || time.minutes>59) {
        cout<<"INVALID!! Enter time between (0-59): ";
        cin>>time.minutes;
    }
    cout<<'\n';
    cout<<"The updated time is : "<<time.hours<<":"<<(time.minutes<10? "0":"")<<time.minutes<<" "<<time.timePeriod;
}
