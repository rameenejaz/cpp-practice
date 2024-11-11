#include <iostream>
using namespace std;
void printArray(int arr[], int size) {
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}
int main () {
   int numbers[5]={1,2,3,4,5};
   int size=5;
   printArray(numbers,size);
}