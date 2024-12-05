//displaying the address of each element of an array
#include <iostream>
using namespace std;
int main () {
    double arr[3];
    double *ptr;
    cout<<"Displaying address using arrays: "<<'\n';
    //for loop to print the address of all array elements;
    for (int i=0; i<3; i++) {
        cout<<"&arr["<<i<<"]"<<&arr[i]<<'\n';
    }
    //ptr=&arr[0]
    ptr=arr;
    cout<<"Displaying the address using pointers:"<<'\n';\
    for (int i=0; i<3; i++) {
        cout<<" ptr+ "<<i<<"="<<ptr+i<<'\n';
    }
}