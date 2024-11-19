#include <iostream>
using namespace std;
int main () {
    // string str1="welcome to the online class";
    // //string str2="e";
    // int count=0;
    // for (int i=0 ;str1[i]!='\0'; i++) {
    //     count++;
    // }
    // cout<<count;

    int myArray[5]={100,200,300,400,500};
    int *myPtrArray[5];
    int i;
    for (i=0; i<5; i++) {
        cout<<myArray[i]<<'\n';
    }
    cout<<'\n';

    for (i=0; i<5; i++) {
        myPtrArray[i]=&myArray[i];
    }
   cout<<'\n';
   for (i=0; i<5; i++) {
    cout<<myPtrArray[i]<<'\n';
   }
}
