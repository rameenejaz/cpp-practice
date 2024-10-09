#include <iostream>
using namespace std;
int main () {
    int number;
    int product;
    cout<<"Enter the number to find multiplication table: ";
    cin>>number;
    for (int i=1; i<=10; i++) {
        cout<<number<<"*"<<i<<"="<<number*i<<'\n';
    }

}