#include <iostream>
using namespace std;
int calcSum(int arr[], int size) {
    int sum=0;
    for (int i=0; i<=size; i++) {
        sum+=i;
    }
    return sum;
}
int main () {
    int numbers[5]={1,2,3,4,5};
    int size=5;
    int sum=calcSum(numbers,size);
    cout<<"The sum is: "<<sum<<'\n'; 
}