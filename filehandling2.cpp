#include <iostream>
#include <fstream>
using namespace std;
int main () {
ifstream fsin("sample02.txt");
char ch;
while(!fsin.eof()) {
    fsin.get(ch);
    cout<<ch;
}
fsin.close();
}