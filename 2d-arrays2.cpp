#include <iostream>
using namespace std;
const int numOfRows=3;
const int numOfCols=4;
void input (int matrix[][numOfCols], int numOfRows) {
    cout<<"Enter 12 values into the array:";
    for (int row=0; row<numOfRows; row++) {
        for (int col=0; col<numOfCols; col++) {
            cin>>matrix[row][col];
        }
    }
}
void transposeMatrix(int matrix[][numOfCols],int transpose[][numOfRows] ,int numOfRows){
    for (int row=0; row<numOfRows; row++) {
        for (int col=0; col<numOfCols; col++) {
            transpose[col][row]=matrix[row][col];
        }
    }
}
void displayTranspose(int transpose[][numOfRows], int numOfRows) {
    cout<<"The transposed matrix is: ";
    for (int col=0; col<numOfCols; col++){
        for(int row=0; row<numOfRows; row++){
            cout<<transpose[col][row]<<" ";
        }
        cout<<'\n';
    }
}
int main () {
    int list[numOfRows][numOfCols];
    int transpose[numOfCols][numOfRows];
    input(list,numOfRows);
    transposeMatrix(list,transpose,numOfRows);
    displayTranspose(transpose,numOfRows);
}

