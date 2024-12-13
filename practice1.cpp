#include <iostream>
#include <string>
using namespace std;
struct TimeStruct_t {
    int hours;
    int minutes;
    string timePeriod;
};
void getData(TimeStruct_t &myTime, int &updateHours, int &updateMinutes) {
    cout << "Enter hours (1-12): ";
    cin >> myTime.hours;
    while (myTime.hours < 1 || myTime.hours > 12) {
        cout << "Invalid hours! Enter hours (1-12): ";
        cin >> myTime.hours;
    }

    cout << "Enter minutes (0-59): ";
    cin >> myTime.minutes;
    while (myTime.minutes < 0 || myTime.minutes > 59) {
        cout << "Invalid minutes! Enter minutes (0-59): ";
        cin >> myTime.minutes;
    }

    cout << "Enter the time period (am/pm): ";
    cin >> myTime.timePeriod;
    while (myTime.timePeriod != "am" && myTime.timePeriod != "pm") {
        cout << "Invalid time period! Enter (am/pm): ";
        cin >> myTime.timePeriod;
    }
    cout << "Enter hours to update: ";
    cin >> updateHours;
    cout << "Enter minutes to update: ";
    cin >> updateMinutes;
}

void display_time(const TimeStruct_t &myTime) {
    cout << myTime.hours << ":"
         << (myTime.minutes < 10 ? "0" : "") << myTime.minutes
         << " " << myTime.timePeriod << endl;
}

// Function to update the time
TimeStruct_t tic(TimeStruct_t myTime, int updateHours, int updateMinutes) {
    myTime.minutes += 1;
    myTime.hours += updateHours;
    myTime.minutes += updateMinutes;

    // Handle minute overflow
    if (myTime.minutes >= 60) {
        myTime.hours += myTime.minutes / 60;
        myTime.minutes %= 60;
    }
    while (myTime.hours > 12) {
        myTime.hours -= 12;
        myTime.timePeriod = (myTime.timePeriod == "am") ? "pm" : "am";
    }
    if (myTime.hours == 12 && (updateHours > 0 || updateMinutes > 0)) {
        myTime.timePeriod = (myTime.timePeriod == "am") ? "pm" : "am";
    }
    return myTime;
}
int main() {
    TimeStruct_t time;
    int updateHours = 0, updateMinutes = 0;
    getData(time, updateHours, updateMinutes);
    cout << "You entered: ";
    display_time(time);
    time = tic(time, updateHours, updateMinutes);
    cout << "The updated time is: ";
    display_time(time);
    return 0;
}
