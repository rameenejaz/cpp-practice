#include <iostream>
using namespace std;
void inputValues(int arr2[], int size2) {
    int index;
    for (index=0; index<size2;index++) {
        cin>>arr2[index];
    }
}
int checkValue(int arr2[], int size2) {
    int index;
    int findValue=0;
    cout<<"Enter value to find: ";
    cin>>findValue;
    int count_findValue=0;
    for (index=0; index<size2; index++) {
        if(arr2[index]==findValue) {
            count_findValue++;
        }
    }
    if(count_findValue>0) {
    cout<<"Integer "<<findValue<<" is present in the array."<<'\n';
    cout<<"Integer "<<findValue<<" appears "<<count_findValue<<" times in array.";
    }
    else {
        cout<<"Integer "<<findValue<<" is not present in the array.";
    }
    return count_findValue;
}
int main () {
    int list2[10]={0};
    int const size2=10;
    cout<<"Enter Integers: ";
    inputValues(list2,size2);
    checkValue(list2,size2);

}