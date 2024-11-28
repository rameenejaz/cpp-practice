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
// functions for lab task 1 
void input(int arr[], int size) {
    int index;
    for (index=0; index<size; index++) 
    cin>>arr[index];
    cout<<'\n';
}
void display(int arr[], int size) {
    int index;
    for (index=0; index<size; index++) {
        cout<<arr[index]<<" ";
    }
}
int countPositive(int arr[], int size) {
    int index;
    int positiveNum=0;
    for (index=0; index<size; index++) {
        if (arr[index]>0) {
           positiveNum++;
        }
    }
    return positiveNum;
}
int countNegative(int arr[], int size) {
    int index;
    int negativeNum=0;
    for (index=0; index<size; index++) {
        if (arr[index]<0) {
           negativeNum++;
        }
    }
    return negativeNum;
}
int oddNum(int arr[], int size) {
    int index;
    int countOdd=0;
    for (index=0; index<size; index++) {
        if (arr[index]%2==1) {
            countOdd++;
        }
    }
    return countOdd;
}
int EvenNum(int arr[], int size) {
    int index;
    int countEven=0;
    for (index=0; index<size; index++) {
        if (arr[index]%2==0) {
            countEven++;
        }
    }
    return countEven;
}
int zeroValues(int arr[], int size) {
    int index;
    int zeros=0;
    for (index=0; index<size; index++) {
        if (arr[index]==0) {
            zeros++;
        }
    }
    return zeros;
}
int largestValue(int arr[], int size) {
    int index;
    int maxNum=0;
    for(index=0; index<size; index++) {
        if (arr[index]>maxNum) {
            maxNum=arr[index];
        }
    }
    return maxNum;
}
int smallestValue(int arr[], int size) {
    int index;
    int minValue=0;
    for (index=0; index<size; index++) {
        if (arr[index]<minValue) {
            minValue=arr[index];
        }
    }
    return minValue;
}

// functions for lab task 2
//input function
int checkValue(int arr[], int size) {
    int index;
    int findValue=0;
    cout<<"Enter value to find: ";
    cin>>findValue;
    int count_findValue=0;
    for (index=0; index<size; index++) {
        if(arr[index]==findValue) {
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
//functions for lab 3
void reversingArray(int arr1[], int arr2[], int size) {
    int index;
    int j=0;
    for (index=0, j=(size-1); index<size; index++, j--) {
        arr2[index]=arr1[j];
    }
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
    cout<<"There are "<<EvenNum(list,size)<<" even elements"<<'\n';
    cout<<"There are "<<zeroValues(list,size)<<" zero values"<<'\n';
    cout<<"The largest element is: "<<largestValue(list,size)<<'\n';
    cout<<"The smallest element is: "<<smallestValue(list,size)<<'\n';

    //lab task 2
    cout<<"***Second lab task***"<<'\n';
    int list2[10]={0};
    int const size2=10;
    cout<<"Enter "<<size2<< " Integers: ";
    input(list2,size2);
    checkValue(list2,size2);
    cout<<'\n';
    //lab task 3
    cout<<"***Third lab task***"<<'\n';
    cout<<"Enter "<<size2<< " elements: ";
    int arr1[10]={0};
    int arr2[10]={0};
    input(arr1, size2);
    cout<<"Array 2: ";
    reversingArray(arr1, arr2, size2);
    display(arr2,size2);

}