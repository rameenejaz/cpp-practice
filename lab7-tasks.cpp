#include <iostream>
#include <cmath>
using namespace std;

//graded lab task 1
// double hypotenuse(double side1, double side2) {
//     double result= sqrt((side1*side1)+(side2*side2));
//     return result;
// }
// int main () {
//     double s1, s2;
//     cout<<"Enter the value of side 1: ";
//     cin>>s1;
//     cout<<"Enter the value of side 2: ";
//     cin>>s2;
//     cout<<"The hypotenuse of a triangle is: ";
//     double value=hypotenuse(s1,s2);
//     cout<<value;
// }

//graded lab task 2
// void pattern(int num) {
//     for (int i=0; i<num; i++) {
//         for (int j=0; j<num; j++) {
//             cout<<"*";
//         }
//         cout<<'\n';
//     }
// }
// int main () {
//     int sides;
//     cout<<"Enter a number to print parameter sides: ";
//     cin>>sides;
//     cout<<"This is the pattern: "<<'\n';
//     pattern(sides);
// }

//graded lab task 3
// int compareChars(char c1, char c2) {
//     c1=tolower(c1);
//     c2=tolower(c2);
//     if (!isalpha(c1) || !isalpha(c2)) { // isalpha checks if both characters are alphabets 
//         return -99;
//     }
//     else if (c1>c2) {
//         return 1;
//     }
//     else if (c1<c2) {
//         return -1;
//     } 
//     else {
//         return 0;
//     }
// }
// int main () {
//     char ch1;
//     char ch2;
//     cout<<"Enter the first alphabet: ";
//     cin>>ch1;
//     cout<<"Enter the second alphabet: ";
//     cin>>ch2;
//     cout<<"The result is: "<<compareChars(ch1,ch2);
// }
