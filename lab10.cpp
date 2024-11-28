#include <iostream>
#include <iomanip>
using namespace std;
const int numOfRows=3;
const int numOfCols=4;
//functions for lab task 1
void input (int matrix[][numOfCols], int numOfRows) {
    cout<<"Enter 12 values into the array:";
    for (int row=0; row<numOfRows; row++) {
        for (int col=0; col<numOfCols; col++) {
            cin>>matrix[row][col];
        }
    }
}
void displayArray (int matrix[][numOfCols], int numOfRows) {
    cout<<"The array is as follows: "<<'\n';
    for (int row=0; row<numOfRows; row++) {
        for (int col=0; col<numOfCols; col++) {
            cout<<matrix[row][col]<<" ";
        }
        cout<<'\n';
    }
}
int maxRowSum (int matrix[][numOfCols], int numOfRows) {
    int sum=0; 
    int maxSumRow=0;
    int maxRow=-1;
    for (int row=0; row<numOfRows; row++) {
        sum=0;
        for (int col=0; col<numOfCols; col++) {
            sum+=matrix[row][col];
        }
            if (sum>maxSumRow) {
            maxSumRow=sum;
            maxRow=row;
            }
    }
    return (maxRow+1);
}
int maxColSum (int matrix[][numOfCols], int numOfRows) {
    int sum=0;
    int maxSumCol=0;
    int maxCol=-1;
    for (int col=0; col<numOfCols; col++) {
        sum=0;
        for (int row=0; row<numOfRows; row++) {
            sum+=matrix[row][col];
        }
        if (sum>maxSumCol) {
            maxSumCol=sum;
            maxCol=col;
        }
    }
    return (maxCol+1);
}
//functions for lab task 2:
int primeNum(int matrix[][numOfCols], int numOfRows){
    int primeNum;
    int maxPrime=0;
    int primeCol=-1;
    for (int col=0; col<numOfCols; col++) {
        for (int row=0; row<numOfRows; row++) {
            if ((matrix[row][col]%col)!=0) {
                primeNum=matrix[row][col];
            }
            if (primeNum>maxPrime) {
                maxPrime=primeNum;
                primeCol=col;
            }

    }
}
    return (primeCol+1);
}

int main () {
    //for lab task 1:
    cout<<"***first lab task***"<<'\n';
    int list[numOfRows][numOfCols];
    input(list,numOfRows);
    displayArray(list,numOfRows);
    cout<<"Column "<<maxColSum(list,numOfRows)<<" has the maximum sum"<<'\n';
    cout<<"Row "<<maxRowSum(list,numOfRows)<<" has the maximum sum"<<'\n';

    //for lab task 2:
    cout<<"***Second lab task***"<<'\n';
    input(list,numOfRows);
    cout<<"Column "<<primeNum(list,numOfRows)<<"has the maximum number of prime numbers."<<'\n';
}