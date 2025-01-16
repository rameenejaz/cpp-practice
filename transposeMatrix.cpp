#include <iostream>
using namespace std;
const int cols=3;
const int rows=2;
void input(int arr[][cols], int cols) {
    cout<<"Enter 6 elements:";
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cin>>arr[i][j];
        }
        cout<<'\n';
    }
}
void transposed(int arr[][cols], int transpose[][rows], int rows) {
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            transpose[j][i]=arr[i][j];
        }
    }
}
void displayTranspose(int transpose[][rows], int rows) {
    cout<<"The transposed matrix is:"<<'\n';
    for(int i=0; i<cols; i++ ) {
        for (int j=0; j<rows; j++) {
            cout<<transpose[i][j]<<" ";
        }
        cout<<'\n';
    }
}
int main () {
    int array[rows][cols];
    int transpose[cols][rows];
    input(array, cols);
    transposed(array,transpose, rows);
    displayTranspose(transpose, rows);
}