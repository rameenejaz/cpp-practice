#include <iostream>
using namespace std;
int main () {
    int number;
    int product=1;
    for (int i=2; i<=100; i+=2) {
        product*=i;
    }
    cout<<"The product is of all even numbers : "<<product<<'\n';
}