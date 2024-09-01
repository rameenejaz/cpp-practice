#include <iostream>
using namespace std;
int main () {
    float simpleInterest=0;
    float amount=0;
    float rate=0;
    int time=0;

    cout<<"Enter principal amount:";
    cin>>amount;
    cout<<"Enter rate (in percent):";
    cin>>rate;
    cout<<"Enter time (in hours):";
    cin>>time;

    simpleInterest= (amount*rate*time)/100;
    cout<<"simpleInterest="<<simpleInterest<<'\n';


}