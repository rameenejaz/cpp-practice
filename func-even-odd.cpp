#include <iostream>
using namespace std;
int even(int num) {
    int evenNum=(num%2==0);
    return evenNum;
}
int odd(int num) {
    int oddNum(num%2==1);
    return oddNum;
}
int main () {
    int num=0;
    cout<<"Enter a value: ";
    cin>>num;
    if (even(num)){
        cout<<num<<" is even"<<'\n';
    }
    else {
        cout<<num<<" is odd"<<'\n';
    }
}