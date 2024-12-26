
#include <iostream>
#include <fstream>
using namespace std;
int main () {
    fstream inFile("input.txt", ios::in);
    if (!inFile) {
        cout<<"File not opened!"<<'\n';
    }
    else {
        string line;
        cout<<"File opened successfully!"<<'\n';
        cout<<"reading from file"<<'\n';
        while(getline(inFile,line)) {
            cout<<line<<'\n';
        }
    }
    inFile.close();
    cout<<"File closed successfully!"<<'\n';

}