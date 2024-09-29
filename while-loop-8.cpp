//finding the total of each next number inputted by user
#include <iostream>
using namespace std;
int main () {
    int inputNumber;
    cout<<"THE RUNNING TOTAL"<<'\n';
    int sum=0;
    while (inputNumber>0) {
        cout<<"Enter the next number: ";
        cin>>inputNumber;
        cout<<'\n';

        sum=sum + inputNumber;
        cout<<"The current sum is: "<<sum<<'\n';
           inputNumber--;
    }
    cout<<"The total is: "<<sum<<'\n';

}