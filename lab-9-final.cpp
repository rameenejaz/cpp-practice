#include <iostream>
using namespace std;
void displayName() {
cout << "********************************************" << endl;
cout << "*** PROGRAMMING FUNDAMENTALS-LAB ***" << endl;
cout << "*** LAB WEEK 9 ***" << endl;
cout << "*** FA24-BSE-160 ***" << endl;
cout << "*** RAMEEN MUZAMMIL EJAZ ***" << endl;
cout << "********************************************" << endl;
}
//functions of lab task 1
void input (int arr[], int size) {
    int index;
    for (index=0; index<size; index++) {
        cin>>arr[index];
        cout<<'\n';
    }
}
void display (int arr[], int size) {
    int index;
    for (index=0; index<size; index++) {
        cout<<arr[index]<<" ";
    }
    cout<<'\n';
}
int countPositive (int arr[], int size) {
    int index;
    int countPlus=0;
    for (index=0; index<size; index++) {
        if (arr[index]>0) {
            countPlus++;
        }
        }
        return countPlus;
}
int countNegative(int arr[], int size) {
    int index;
    int countMinus=0;
    for (index=0; index<size; index++) {
        if (arr[index]<0) {
            countMinus++;
        }
        }
        return countMinus;
}
int oddNum(int arr[], int size) {
    int index;
    int countOdd;
    for (index=0; index<size; index++) {
        if (arr[index]%2==1) {
            countOdd++;
        }
    }
    return countOdd;
}
int evenNum (int arr[], int size) {
    int index;
    int countEven=0;
    for (index=0; index<size; index++) {
        if (arr[index]%2==0) {
            countEven++;
        }
    }
    return countEven;
}
int zeros(int arr[], int size) {
    int index;
    int countZeros=0;
    for (index=0; index<size; index++) {
        if (arr[index]==0) {
            countZeros++;
        }
    }
    return countZeros;
}
int maxValue(int arr[], int size) {
    int index;
    int max=0;
    for (index=0; index<size; index++) {
        if (arr[index]>max) {
            max=arr[index];
        }
    }
    return max;
}
int minValue(int arr[], int size) {
    int index;
    int min=0;
    for (index=0; index<size; index++) {
        if (arr[index]<min) {
            min=arr[index];
        }
    }
    return min;
}
//functions for lab task 2
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
    displayName();
    //lab task 1
    cout<<"***First lab task*** "<<'\n';
    int list[20]={0};
    int const size=20;
    cout<<"Enter "<<size<< " elements: ";
    input(list,size);
    cout<<"The elements are: ";
    display(list,size);
    cout<<'\n';
    cout<<"There are "<<countPositive(list,size)<<" positive elements"<<'\n';
    cout<<"There are "<<countNegative(list,size)<<" negative elements"<<'\n';
    cout<<"There are "<<oddNum(list,size)<<" odd elements"<<'\n';
    cout<<"There are "<<evenNum(list,size)<<" even elements"<<'\n';
    cout<<"There are "<<zeros(list,size)<<" zero values"<<'\n';
    cout<<"The largest element is: "<<maxValue(list,size)<<'\n';
    cout<<"The smallest element is: "<<minValue(list,size)<<'\n';

    //lab task 2
    cout<<"***Second lab task***"<<'\n';
    int list2[10]={0};
    int const size2=10;
    cout<<"Enter "<<size2<< " Integers: ";
    inputValues(list2,size2);
    checkValue(list2,size2);
    cout<<'\n';

    //lab task 3
    int const size3=10;
    int list[10];
    

}