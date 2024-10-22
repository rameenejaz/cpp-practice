#include <iostream>
using namespace std;
int main () {
    int number=0;
    int count=0;
    int average=0;
    int sum=0;
    int const SENTINEL= -999;
    while (number!=SENTINEL) {
        cout<<"Enter numbers between 50 and 550 or (-999) to exit: ";
        cin>>number;
        count++;
        sum+=number;
        average=sum/count;
    }
    cout<<"The number of inputs from user are: "<<(count-1)<<'\n';
    cout<<"The sum of the entered numbers is: "<<sum<<'\n';
    cout<<"The average of the entered numbers is: "<<average<<'\n';
}