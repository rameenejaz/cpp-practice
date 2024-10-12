#include <iostream>
using namespace std;
int main () {
    int number[5]= {10,20,30,40,50};

    for (int i=0; i<5; i++) {
        cout<<"Element at index "<<i<<": "<<number[i]<<'\n';
    }
    number[2]=100;
    cout<<"After modification, element at index 2 is: "<<number[2]<<'\n';
}