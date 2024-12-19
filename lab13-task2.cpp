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
}