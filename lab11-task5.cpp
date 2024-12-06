//swapping the position of two strings
#include <iostream>
#include <string>
using namespace std;
int main () {
    string input;
    string str1;
    string str2;
    cout<<"Enter two words seperated by a space: ";
    getline(cin, input);
    int findSpace=input.find(' ');
    str1=input.substr(0,findSpace);
    str2=input.substr(findSpace+1);
    cout<<"Correct Answer: "<<str2<<" "<<str1<<'\n';
    
}