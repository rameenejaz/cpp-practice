#include <iostream>
using namespace std;
//finding max value in an array
int findMax(int arr[], int size) {
    int max=0;
    for (int i=0; i<size; i++) {
        if (arr[i]>max) {
            max=arr[i];
        }
    }
    return max;
}
int main () {
    int numbers[5]={1,2,3,4,5};
    int size=5;
    int maximum=findMax(numbers,size);
    cout<<"The largest value in the array is: "<<maximum<<'\n';
}