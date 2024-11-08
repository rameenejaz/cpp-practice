#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;
//graded lab task 1
// double hypotenuse(int side1, int side2) {
//     double result=sqrt((side1*side1)+(side2*side2));
//     return result;
// }
void pattern(int num) {
//     for (int i=0; i<num; i++) {
//         for (int j=0; j<num; j++) {
//             cout<<"*";
//         }
//         cout<<'\n';
//     }
// }
int compareChars(char c1, char c2) {
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
int sumDigits(int number) {
    int sum=0;
    while (number>0) {
        sum+=number%10;
        number/=10;
    }
    return sum;
}
int reverse(int number) {
    int reverse=0;
    while (number>0) {
        reverse=reverse*10+ number%10;
        number/=10;
    }
    return reverse;
}
bool isPalindrome(int number) {
    return number==reverse(number);
}
// int main () {
//     int a;
//     int b;
//     cout<<"Enter the first side value: ";
//     cin>>a;
//     cout<<"Enter the second side value: ";
//     cin>>b;
//     cout<<"The hypotenuse side value is: "<<hypotenuse(a,b);

//task 2
int sides;
//     cout<<"Enter a number to print parameter sides: ";
//     cin>>sides;
//     cout<<"This is the pattern: "<<'\n';
//     pattern(sides);
// 
//
//task 3

//     char ch1;
//     char ch2;
//     cout<<"Enter the first alphabet: ";
//     cin>>ch1;
//     cout<<"Enter the second alphabet: ";
//     cin>>ch2;
//     cout<<"The result is: "<<compareChars(ch1,ch2);
// }
//task 4
  int value;
    cout<<"Enter a four digit number: ";
    while (!(cin>>value) ||value<=1000|| value>=9999) {
        cout<<"INVALID!Enter value again";
        cin.clear();
        cin.ignore();
    }
    cout<<"The sum is: "<<sumDigits(value)<<'\n';
    cout<<"The reversed number is: "<<reverse(value)<<'\n';
    cout << "The number is " << (isPalindrome(value) ? "" : "not ") << "a palindrome." << '\n';



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

//graded lab task 4
int sumDigits(int number) {
    int sum=0;
    while (number>0) {
        sum+=number%10;
        number/=10;
    }
    return sum;
}
int reverse(int number) {
    int reverse=0;
    while (number>0) {
        reverse=reverse*10+ number%10;
        number/=10;
    }
    return reverse;
}
bool isPalindrome(int number) {
    return number==reverse(number);
}
int main () {
    int value;
    cout<<"Enter a four digit number: ";
    while (!(cin>>value) ||value<=1000|| value>=9999) {
        cout<<"INVALID!Enter value again";
        cin.clear();
        cin.ignore();
    }
    cout<<"The sum is: "<<sumDigits(value)<<'\n';
    cout<<"The reversed number is: "<<reverse(value)<<'\n';
    cout << "The number is " << (isPalindrome(value) ? "" : "not ") << "a palindrome." << '\n';

}

