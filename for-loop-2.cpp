#include <iostream>
using namespace std;
int main () {
    int number=0;
    cout<<"Enter a number of levels of patterns: ";
    cin>>number;
    for (int i=number; i>=1; i--) {
        for (int j=i; j>0; j--){
            cout<<"*";
        }
        cout<<'\n';
    }
}