#include <iostream>
using namespace std;
int main () {
    int number=0;
    int sum=0;
    int i=1;

    cout<<"Enter a value for number: ";
    cin>>number;
    while (number>=i) {
       sum=number+i;
       i++;
    }
       cout<<"Sum= "<<sum;

}