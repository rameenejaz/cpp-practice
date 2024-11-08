#include <iostream>
#include <cmath>
using namespace std;
//lab task 1
double hypotenuse(double side1, double side2) {
    double result= sqrt((side1*side1)+(side2*side2));
    return result;
}
//lab task 2
void pattern(int num) {
    for (int i=0; i<num; i++) {
        for (int j=0; j<num; j++) {
            cout<<"*";
        }
        cout<<'\n';
    }
}
//lab task 3
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

//lab task 4
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
    //task 1
    cout<<"Finding the hypotenuse of a triangle"<<'\n';
    double s1, s2;
    cout<<"Enter the value of side 1: ";
    cin>>s1;
    cout<<"Enter the value of side 2: ";
    cin>>s2;
    cout<<"The hypotenuse of a triangle is: ";
    double value=hypotenuse(s1,s2);
    cout<<value<<'\n';

    //task 2
    cout<<"Printing patterns"<<'\n';
    int sides;
    cout<<"Enter a number to print parameter sides: ";
    cin>>sides;
    cout<<"This is the pattern: "<<'\n';
    pattern(sides);
    cout<<'\n';

    //task 3
    cout<<"comparison of alphabets"<<'\n';
    char ch1;
    char ch2;
    cout<<"Enter the first alphabet: ";
    cin>>ch1;
    cout<<"Enter the second alphabet: ";
    cin>>ch2;
    cout<<"The result is: "<<compareChars(ch1,ch2)<<'\n';
    
    //task 4
    cout<<"Finding sum, reversing a number and checking if its palindrome or not"<<'\n';
    int num;
    cout<<"Enter a four digit number: ";
    while (!(cin>>num) ||num<=1000|| num>=9999) {
        cout<<"INVALID!Enter value again";
        cin.clear();
        cin.ignore();
    }
    cout<<"The sum is: "<<sumDigits(num)<<'\n';
    cout<<"The reversed number is: "<<reverse(num)<<'\n';
    cout << "The number is " << (isPalindrome(num) ? "" : "not ") << "a palindrome." << '\n';
}
