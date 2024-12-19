#include <iostream>
#include <fstream>
using namespace std;
int main () {
    cout<<"***Lab task 1*** "<<'\n';
    int x,z;
    double y;
    ofstream outFile("file1.txt");
    if(!outFile) {
        cout<<"Error, File not opened"<<'\n';
    }
    else {
        cout<<"File has been opened successfully."<<'\n';
        cout<<"Enter an integer value for x: ";
        cin>>x;
        cout<<"Enter a double value for y: ";
        cin>>y;
        cout<<"Enter an integer value for z: ";
        cin>>z;
        outFile<<x<<'\n'<<y<<'\n'<<z<<'\n';
    }
    outFile.close();
    cout<<"Data written successfully!"<<'\n';
    cout<<"***Lab task 2***"<<'\n';
    ifstream inFile ("file1.txt");
    // int x,z;
    // double y;
    int sumIntegers=0;
    if (!inFile) {
        cout<<"Error! No file found"<<'\n';
        return 1;
    }
    else {
        cout<<"File has been opened successfully."<<'\n';
        while(inFile>>x>>y>>z) {
            cout<<"Variables have been inputted."<<'\n';
        }
        sumIntegers=x+z;
        cout<<"Integers: ("<<x<<"+"<<z<<")="<<(x+z)<<'\n';
        cout<<"Double: "<<y<<'\n';
        cout<<"Data read successfully"<<'\n';
    }
    inFile.close();
    cout<<"File has been closed successfully."<<'\n';
}