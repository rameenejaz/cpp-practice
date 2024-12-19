#include <iostream>
#include <fstream>
using namespace std;
int main () {
    ifstream inFile ("file1.txt");
    int x,z;
    double y;
    int sumIntegers=0;
    if (!inFile) {
        cout<<"Error! No file found"<<'\n';
        return 1;
    }
    else {
        cout<<"File has been opened successfully."<<'\n';
        while(inFile>>x>>y>>z) {
            cout<<"Variables have been read."<<'\n';
        }
        sumIntegers=x+z;
        cout<<"Integers: ("<<x<<"+"<<z<<")="<<(x+z)<<'\n';
        cout<<"Double: "<<y<<'\n';
    }
    inFile.close();
    cout<<"File has been closed successfully."<<'\n';

}