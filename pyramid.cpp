#include <iostream>
using namespace std;
int main () {
    int num=0;
    int sum=0;
    cin>>num;
    sum=num;
    while (num!=-1) {
        cin>>num;
        sum+=num;
    }
    cout<<"Sum is: "<<sum<<'\n';
}