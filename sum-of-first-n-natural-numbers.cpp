// Question: Write a program that calculates the sum of the first N natural numbers, where N is provided by the user.

#include <iostream>
using namespace std;

int main() {
    int i;
    int sum=0;
    int n;
    cout<<"enter a value of n"<<'\n';
    cin>>n;

    for (i=1; i<=n; i++) {
        sum=sum+i;
    }
    cout<<"The sum of of the first N natural numbers is: "<< sum <<'\n';

}
