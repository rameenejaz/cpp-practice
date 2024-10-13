#include <iostream>
using namespace std;
int main () {
    int seconds;
    int remainingSecs;
    int hours;
    int minutes;
    cout<<"Enter time in seconds: ";
    cin>>seconds;
    hours=seconds/3600;
    seconds%=3600;
    minutes=seconds/60;
    seconds%=60;
    seconds=remainingSecs;
    cout<<"The total time is: "<<hours<<":"<<minutes<<":"<<remainingSecs;    


}