#include <iostream>
using namespace std;
int main () {
    char letter;
bool isVowel=false;
cout<<"Enter a letter to check if it is a vowel or consonant: ";
cin>>letter;
switch (letter) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    isVowel=true;
    break;
    default:
    cout<<"it is a consonant"<<'\n';
}
if (isVowel) {
    cout<<"It is a vowel"<<'\n';
}
}