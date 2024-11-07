#include <iostream>
using namespace std;
void pattern(int num) {
    for (int i=0; i<num; i++) {
        for (int j=0; j<num; j++) {
            cout<<"*";
        }
        cout<<'\n';
    }
}
int main () {
    int sides;
    cout<<"Enter a number to print parameter sides: ";
    cin>>sides;
    cout<<"This is the pattern: "<<'\n';
    pattern(sides);
}
