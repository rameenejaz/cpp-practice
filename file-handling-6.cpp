#include <iostream>
#include <fstream>
using namespace std;
int main () {
    ifstream inFile("file1.txt");
    if(!inFile) {
        cout<<"File not opened"<<'\n';
    }
    else {
        cout<<"File opened successfully!"<<'\n';
        int wordCount=0;
        string word;
        while(inFile>>word) {
            wordCount++;
        }
        cout<<"There are "<<wordCount<<" words"<<'\n';
        inFile.close();

    }
}