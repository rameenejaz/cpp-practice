#include <iostream>
using namespace std;
int main () {
    int age=0;
    
    cout<<"enter your age:";
    cin>>age;
    if (age>0) {
    if (age>=18) {
        cout<<"YES YOU CAN VOTE"<<'\n';
    }
    else {
        cout<<"No you cannot vote"<<'\n';
    }
    
    }
    else {
        cout<<"ERROR"<<'\n';
    }
}