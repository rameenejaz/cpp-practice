#include <iostream>
using namespace std;
int main () {
    int number=0;
    int const SENTINEL=-999;
    int sum=0;
    int average=0;
    int steps=0; //total no of inputs
    int count=0; //today no of inputs in range
    while (number!=SENTINEL) {
        cout<<"Enter a value between 50 and 500 or (-999) to stop: ";
        cin>>number;
        if (number==SENTINEL) {
        break;
        }
        steps++;
        while (number>=50 && number<=500) {
        cout<<"Enter a value between 50 and 500 or (-999) to stop: ";
        cin>>number;
        count++;
        steps++;
        
        sum=sum+number;
        }
    }
    average=sum/count;
    cout<<"Total inputs are: "<<steps<<'\n';
    cout<<"Total inputs in range: "<<count<<'\n';
    cout<<"Sum: "<<sum<<'\n';
    cout<<"Average: "<<average<<'\n';
}

