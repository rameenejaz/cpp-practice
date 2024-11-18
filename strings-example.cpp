#include <iostream>
using namespace std;
int main () {
    int n=3;
    char ch='!';
    string str1="Programming";
    string *pointer;
    pointer=&str1;
    cout<<pointer->length()<<'\n';
    cout<<pointer->at(1)<<'\n';
    cout<<pointer->append(n,ch)<<'\n';
    cout<<pointer->append(str1)<<'\n';
    cout<<pointer->compare(str1)<<'\n';
}