#include <iostream>
using namespace std;
int main () {
    int hours;
    int minutes;
    int seconds;
    cout<<"Enter the time in hours: ";
    cin>>hours;
    cout<<"Enter the time in minutes: ";
    cin>>minutes;
    cout<<"Enter the time in seconds: ";
    cin>>seconds;
    cout<<"Time = "<<hours<<":"<<minutes<<":"<<seconds;
    int totalTime;
    totalTime=(hours*3600)+(minutes*60)+seconds;
    cout<<"The total time in seconds is: "<<totalTime;
}