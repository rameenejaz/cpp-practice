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
//functions for lab task 2

//functions for lab task 3
void transposeMatrix(int matrix[][numOfCols],int transpose[][numOfRows] ,int numOfRows){
    for (int row=0; row<numOfRows; row++) {
        for (int col=0; col<numOfCols; col++) {
            transpose[col][row]=matrix[row][col];
        }
    }
}
void displayTranspose(int transpose[][numOfRows], int numOfRows) {
    cout<<"The transposed matrix is: "<<'\n';
    for (int col=0; col<numOfCols; col++){
        for(int row=0; row<numOfRows; row++){
            cout<<transpose[col][row]<<" ";
        }
        cout<<'\n';
    }
}

int main () {
    //for lab task 1:
    cout<<"***first lab task***"<<'\n';
    int list[numOfRows][numOfCols];
    input(list,numOfRows);
    displayArray(list,numOfRows);
    cout<<"Column "<<maxColSum(list,numOfRows)<<" has the maximum sum"<<'\n';
    cout<<"Row "<<maxRowSum(list,numOfRows)<<" has the maximum sum"<<'\n';
    //for lab task 2
    cout<<"***second lab task***"<<'\n';
    input(list,numOfRows);
    
    //for lab task 3
    cout<<"***Third lab task***"<<'\n';
    int transpose[numOfCols][numOfRows]; //the transpose array.
    input(list,numOfRows);
    transposeMatrix(list,transpose,numOfRows);
    displayTranspose(transpose,numOfRows);


}