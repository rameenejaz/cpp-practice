#include <iostream>
using namespace std;

void findMinMax(int arr[], int size, int &maxValue, int &minValue) {
    maxValue=arr[0];
    minValue=arr[0];
    for (int i=0; i<15; i++) {
        if (arr[i]>maxValue) {
            maxValue=arr[i];
        }
        if (arr[i]<minValue) {
            minValue=arr[i];
        }
    }
}
int main () {
    int arr[15]={1,2,3,4,5,6,7};
    int maxVal; 
    int minVal;
    findMinMax(arr, 15, maxVal, minVal);
    cout<<"The max value is: "<<maxVal<<" The min value is: "<<minVal<<'\n';
}