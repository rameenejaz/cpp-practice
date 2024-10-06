#include <iostream>
using namespace std;
int main () {
   int age=0;
   char gender;
   cout<<"Enter your age: ";
   cin>>age;
   cout<<'\n';
   cout<<"Enter your gender (M or F)";
   cin>>gender;
   cout<<'\n';
   if (age>=18) {
    cout<<"You are eligible to vote"<<'\n';
    if (gender=='M' || gender=='m') {
        cout<<"Move to room-1 for voting"<<'\n';
    }
    else if (gender=='F' || gender=='f') {
        cout<<"Move to room-2 for voting"<<'\n';
    }
   }
    else {
        cout<<"You cannot vote";
    }

}