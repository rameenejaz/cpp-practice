#include <iostream>
using namespace std;
 int main () {
    int number=0;
    int counter=0;
    int sum=0;
    int average=0;
    const int SENTINEL=10;
    cout<<"Enter the positive integers ending with: "<< SENTINEL <<'\n';
    cin>>number;
    while (number!=SENTINEL) {
        sum+=number;
        counter++;
        cin>>number;
    }
    cout<<"The sum of the integers are "<<sum<<'\n';
    if (counter!=0) {
        average=sum/number;
        cout<<"The average of the integers is: "<<average<<'\n';
    }
    else {
        cout<<"ERROR! No input";
    }
 }