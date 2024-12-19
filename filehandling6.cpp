#include <iostream>
#include <fstream>
using namespace std;
int main () {
    ifstream inFile("sample02.txt");
    int line=0;
    while(!inFile.eof()) {
        inFile>>line;
        cout<<line<<'\n';
    }
    inFile.close();
}
