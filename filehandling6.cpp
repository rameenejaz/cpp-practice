#include <iostream>
#include <fstream>
using namespace std;
int main () {
    ifstream inFile("sample02.txt");
    if(!inFile) {
        cout<<"File not opened!"<<'\n';
    }
    else{
        cout<<"File opened successfully"<<'\n';
        string line;
        while(getline(inFile, line)) {
            cout<<'\n';
            cout<<line;
        }
        cout<<'\n';
    }
    inFile.close();
    ofstream onFile("sample02.txt", ios::app); 
        if(!onFile) {
            cout<<"File not opened"<<'\n';
        }
        else {
            cout<<"File opened successfully!!"<<'\n';
            onFile<<"I AM RAMEEN"<<'\n';
            onFile<<"I AM HERE"<<'\n';
        }
    
}
