#include <iostream>
using namespace std;
int main () {
    int number=1;
    int i=1;
    int product=1;
    cout<<"Enter the number to display its multiplication table: ";
    cin>>number;
    cout<<'\n';

    while (i<=10) {
        product=number*i;
    }
    cout<<number<<"*"<<i<<"="<<product;
        i++;

}