#include <iostream>
using namespace std;
#include <iomanip>
const int numOfRows=3;
const int numOfCols=3;
//to initialize a 2D array to zero
void initialize (int matrix[][numOfCols],int numOfRows) {
    for (int row=0; row<numOfRows; row++) {
        for (int col=0; col<numOfCols; col++) {
            matrix[row][col]=0;
        }
    }
}
void input (int matrix[][numOfCols], int numOfRows) {
    cout<<"Enter values into the array:";
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
void sumRow (int matrix[][numOfCols], int numofCols ) {
    int sum=0;
    for (int row=0; row<numOfRows; row++) {
        sum=0;
        for (int col=0; col<numofCols; col++) {
            sum+=matrix[row][col];
        }
        cout<<"The sum of row "<<(row+1)<<"="<<sum<<'\n';
    }
}
void sumCols(int matrix[][numOfCols], int numOfRows) {
    int sum=0;
    for (int col=0; col<numOfCols; col++) {
        for (int row=0; row<numOfRows; row++) {
            sum+=matrix[row][col];
        }
            cout<<"The sum of column "<<(col+1)<<"="<<sum<<'\n';
    }
}
void largestInRow(int matrix[][numOfCols], int numOfRows) {
    for (int row=0; row<numOfRows; row++) {
    int largest=matrix[row][0]; //setting up the largest element to be the first element in the row
        for (int col=0; col<numOfCols; col++) {
            if (largest<matrix[row][col]) {
                largest=matrix[row][col];
            }
        }
        cout<<"The largest element in row "<<(row+1)<<"="<<largest<<'\n';
    }
}
int maxRowSum (int matrix[][numOfRows], int numOfRows) {
    int sum=0; 
    int maxSum=0;
    int maxRow=-1;
    for (int row=0; row<numOfRows; row++) {
        for (int col=0; col<numOfCols; col++) {
            sum+=matrix[row][col];
        }
            if (sum>maxSum) {
            maxSum=sum;
            maxRow=row;
            }
    }
    return maxRow;
}
int main () {
    int list[numOfRows][numOfCols];
    initialize (list,numOfRows);
    displayArray(list,numOfRows);
    input (list, numOfRows);
    displayArray(list,numOfRows);
    sumRow(list, numOfRows);
    sumCols(list, numOfRows);
    largestInRow(list, numOfRows);
    cout<<"Row "<<maxRowSum(list,numOfRows)<<" has the maximum sum."<<'\n';
}
