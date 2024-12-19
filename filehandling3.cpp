#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream fsin("sample02.txt");
    string line;
    while (!fsin.eof()){
        getline(fsin,line);
        cout<<line<<'\n';
    }
    fsin.close();
}