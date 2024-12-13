#include <iostream>
using namespace std;
#include <string>
struct TimeStruct_t {
    int hours;
    int minutes;
    string timePeriod;
};
int main () {
    TimeStruct_t time={3,49,"pm"};
    cout<<"The initial time is: ";
    cout<<time.hours<<":"<<time.minutes<<" "<<time.timePeriod<<'\n';
    cout<<"Enter time in hours between (1-12): ";
    cin>>time.hours;
    cout<<'\n';
    cout<<"Enter time in minutes between (0-59):";
    cin>>time.minutes;
    cout<<"The updated time is: ";
    cout<<time.hours<<":"<<time.minutes<<" "<<time.timePeriod<<'\n';

}