#include <iostream>
using namespace std;
int main () {
    int x;
    int y; 
    int z;
    cout<<"Enter the value of x:";
    cin>>x;
    cout<<"enter the value of y:";
    cin>>y;
    cout<<"enter the value of z:";
    cin>>z;

if (x>y) {
    if (x>z) {
        cout<<"x is the greatest"<<'\n';
    }
    else if (y>z) {
cout<<"y is the greatest"<<'\n';
    }
    else {
    cout<<"z is the greatest"<<'\n';

    }
}
}
