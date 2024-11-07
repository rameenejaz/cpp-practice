#include <iostream>
using namespace std;
int compareChars(char c1, char c2) {
    c1=tolower(c1);
    c2=tolower(c2);
    if (!isalpha(c1) || !isalpha(c2)) { // isalpha checks if both characters are alphabets 
        return -99;
    }
    else if (c1>c2) {
        return 1;
    }
    else if (c1<c2) {
        return -1;
    } 
    else {
        return 0;
    }
}
int main () {
    char ch1;
    char ch2;
    cout<<"Enter the first alphabet: ";
    cin>>ch1;
    cout<<"Enter the second alphabet: ";
    cin>>ch2;
    cout<<"The result is: "<<compareChars(ch1,ch2);
}
