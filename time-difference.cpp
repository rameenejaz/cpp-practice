#include <iostream>
using namespace std;

int main () {
    int time1;
    int time2;
    int timeDifference;

    cout<<"Enter time1:";
    cin>>time1;
    cout<<"Enter time2:";
    cin>>time2;

    timeDifference = (time2 - time1);
    cout<<"Time difference = "<<timeDifference<<'\n';
    if (timeDifference<0) {
        timeDifference = (time1 -time2);

    }







}