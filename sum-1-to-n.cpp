#include <iostream>
using namespace std;
int main () {
    int number=0;
    int sum=0;
    int i=0;
    cout<<"Enter the value of number:";
    cin>>number;

    for (i=1; i<=number; i++) {
        sum=sum+i;

    }
    cout<<"sum="<<sum<<'\n';
}