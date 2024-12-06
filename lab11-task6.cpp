//finding different things in a string
#include <iostream>
using namespace std;
int main () {
    string inputString;
    cout<<"Enter a string: ";
    cin>>inputString;
    //printing the third character
    cout<<"The third character is: "<<inputString.at(2)<<'\n';
    //printing the second to last character of the string
    cout<<"The second to last character of the string is: "<<inputString[inputString.size()-2]<<'\n';
    //printing the first five characters of the string
    cout<<"The first five characters of the string is: "<<inputString.substr(0,5)<<'\n';
    //printing the whole string except the last two characters
    cout<<"The whole string except the last two characters is: "<<inputString.substr(0,inputString.size()-2)<<'\n';
    //printing all the characters of this string with even indices
    cout<<"The characters with even indices are: ";
    for (int index=0; index<inputString.size(); index+=2) {
        cout<<inputString[index]; 
    }
    cout<<'\n';

    //printing all the characters of this string with odd indices
    cout<<"The characters with odd indices are: ";
    for (int index=1; index<inputString.size(); index+=2) {
        cout<<inputString[index]; 
    }
    cout<<'\n';

    //printing all the characters of the string in reverse order
    cout<<"The string in reverse order is: ";
    for (int index=(inputString.size()-1); index>=0; index--) {
        cout<<inputString[index];
    }
    cout<<'\n';
    //printing the length of the string
    cout<<"The length of the string is: "<<inputString.length();
}