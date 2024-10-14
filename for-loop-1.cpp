#include <iostream>
using namespace std;
int main () {
    int number;
    cout<<"Enter a number at which the pattern ends: ";
    cin>>number;
   for (int i=1; i<=number; i++) {
    for (int j=1; j<=i; j++) {
        cout<<"*";
    }
    cout<<'\n';
   }
}
