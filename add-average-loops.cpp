#include <iostream>
using namespace std;
int main () {
    int limit=0;
    int counter=0;
    int number=0;
    int average=0;
    int sum=0;
    cout<<"Enter the number of integers you want to find sum and average for: ";
    cin>>limit;
    cout<<'\n';
    cout<<"Enter "<<limit<<" integers: ";
    cout<<'\n';
    while (counter<limit) {
        cin>>number;
        sum+=number;
        counter++;
    }
    cout<<"The sum of the entered "<<limit<<" integers is: "<<sum;
    if (counter!=0) {
        average= number/counter;
        cout<<"The average of the entered "<<limit<<" integers is: "<<average;
    }
    else {
        cout<<"Error! No output";
    }
}