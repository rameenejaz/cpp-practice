//lab 4
#include <iostream>
using namespace std;
int main () {
//lab task 1
// int number;
// cout<<"Enter a number: ";
// cin>>number;
// switch ((number>0) - (number<0)) {
//     case 1: 
//     cout<<"You have entered a positive number"<<'\n';
//     break;
//     case -1:
//     cout<<"You have entered a negative number "<<'\n';
//     break;
//     case 0:
//     cout<<"You have entered zero"<<'\n';
//     break;
// }

//lab task 2
// char letter;
// bool isVowel=false;
// cout<<"Enter a letter to check if it is a vowel or consonant: ";
// cin>>letter;
// switch (letter) {
//     case 'a':
//     case 'e':
//     case 'i':
//     case 'o':
//     case 'u':
//     isVowel=true;
//     break;
//     default:
//     cout<<"it is a consonant"<<'\n';
// }
// if (isVowel) {
//     cout<<"It is a vowel"<<'\n';
// }

//lab task 3
int numOfBooks;
int points;
cout<<"Enter the number of books you have purchased: ";
cin>>numOfBooks;
switch (numOfBooks) {
    case 0:
    cout<<"You have earned 0 points";
    break;
    case 1: 
    cout<<"You have earned 5 points";
    break;
    case 2:
    cout<<"You have earned 15 points";
    break;
    case 3:
    cout<<"You have earned 30 points";
    break;
    default: 
    cout<<"You have earned 60 points";
    break;
}
}
