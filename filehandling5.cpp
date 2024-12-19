#include <iostream>
#include <fstream>
using namespace std;
int main () {
    ifstream inFile("sample02.txt");
    char ch;
    int count=0;
    if (!inFile.is_open()) {
        cout<<"Problem with opening file.";
    }
    else {
        while (!inFile.eof()) {
            inFile.get(ch);
            if(isupper(ch)) {
                count++;
            }
        }
        cout<<"Total uppercase letters are: "<<count<<'\n';
    }
}