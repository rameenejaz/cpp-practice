#include <iostream>
using namespace std;
#include <fstream>
int main () {
    ofstream inFile("file1.txt");
    int x,z;
    double y;
    if(!inFile) {
        cout<<"File not opened!"<<'\n';
    }
    else {
        if (inFile) {
            cout<<"File opened successfully!"<<'\n';
            cout<<"Enter value of x: ";
            cin>>x;
            cout<<"Enter value of y: ";
            cin>>y;
            cout<<"Enter value of z: ";
            cin>>z;
        }
        inFile<<x<<'\n'<<y<<'\n'<<z<<'\n';
    }
}