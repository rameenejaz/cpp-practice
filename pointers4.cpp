#include <iostream>
using namespace std;
int main () {
    int arr[]={10,15,20};
    int *p=arr;
    *(p+1)=3;
    cout<<"Array elements: ";
    for (int i=0; i<3; i++) {
        cout<<*(p+i)<<" ";
    }
    cout<<'\n';
}