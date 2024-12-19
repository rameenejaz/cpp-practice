#include <iostream>
#include <fstream>
using namespace std;
int main () {
    string st1="Hello rameen";
    string str2;
    //opening files and writing to a file
    // ofstream out("sample01.txt"); //write operation
    // out<<st;
    //opening files and reading it
    ifstream in("sample02.txt"); //read operation
    //in>>str2; 
    getline(in,str2);
    cout<<str2;
}