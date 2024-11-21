#include <iostream>
using namespace std;
int main () {
    int arr[5]={1,2,3,4,5};
    int *p=arr;
    cout<<"The second element is: "<<*(p+1)<<'\n';
    *(p+3)=10;
    cout<<"The updated array is: ";
    for (int i=0; i<5; i++) {
        cout<<*(p+i)<<" ";
    }
}