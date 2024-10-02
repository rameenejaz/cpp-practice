#include <iostream>
using namespace std; 
int main () {
    int number;
    int i=1;
    int sum=0;
    cout<<"Enter a value for number to find sum: ";
    cin>>number;
    while (i<=number) {
        sum=sum+i;
        i++;
    }
    cout<<"sum= "<<sum<<'\n';
}