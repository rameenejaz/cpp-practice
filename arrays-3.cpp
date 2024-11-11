#include <iostream>
using namespace std;
int main () {
    int number[5]= {10,20,30,40,50};
    for (int i=0; i<5; i++) {
        cout<<"The value at index "<<i<<" is: "<<number[i]<<'\n';
    }
    number[4]=100;
    cout<<"The 5th element is: "<<number[4];
}