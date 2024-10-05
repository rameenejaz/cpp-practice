//while and for loops questions:
//lab 5
#include <iostream>
using namespace std;
int main () {
//lab task 1a
    int A;
    int B;
    cout<<"Enter the value of A: ";
    cin>>A;
    cout<<"Enter the value of B: ";
    cin>>B;
    for (int i=A; i<=B; i++) {
        cout<<"The numbers are: "<<i<<'\n';
    }

//lab task 1b 
if (A<=B) {
 for (int i=A; i<=B; i++) {
        cout<<"The numbers are in ascending order: "<<i<<'\n';
}
}
if (A>=B) {
    for (int i=A; i>=B; i--) {
        cout<<"The numbers are in the following descending: "<<i<<'\n';
    }
}
//lab task 1c
int N=0;
int cube=0;
int sum=0;
cout<<"Enter the value of N to find the sum of the cubed: ";
    cin>>N;
    for (int i=1 ; i<=N ; i++) {
        sum+=(i*i*i);

    }
    cout<<"The sum of the cubes is: "<<sum<<'\n';

//lab task 2
    int number;
    int factorial=1;
    int i=1;
    cout<<"Enter a positive integer: ";
    cin>>number;
    if (number<0) {
        cout<<"ERROR! Enter a positive number: ";
        cin>>number;
    }
    while (i<=number) {
    factorial = i*factorial;
    i++;
    }
    cout<<"Factorial of "<<number<<" is "<<factorial<<'\n';

//lab task 3
    int N; 
    int zeros = 0;
    int number;
    cout << "Enter the number of integers (N): "; 
    cin >> N;
    for (int i = 0; i < N; i++) {
    cin >> number;
    if (number == 0) {
    zeros++;
    }
}
cout << "Number of zeros: " << zeros << '\n';
    
//lab task 4
int evenNumbers = 0;
int number;
    cout << "Enter the number of integers: ";
    cin >> number;
    while (number!=0) {            
        if (number% 2 == 0) {
        evenNumbers++;
        }
        cout<<"Enter another number: ";
        cin >> number;
    }
    cout << "Number of even numbers ending with zero : " << evenNumbers << '\n';
}


//switch statements questions:
//lab 4
#include <iostream>
using namespace std;
int main () {
//lab task 1
int number;
cout<<"Enter a number: ";
cin>>number;
switch ((number>0)-(number<0)) {
    case 1: 
    cout<<"You have entered a positive number"<<'\n';
    break;
    case -1:
    cout<<"You have entered a negative number "<<'\n';
    break;
    case 0:
    cout<<"You have entered zero"<<'\n';
    break;
}

//lab task 2
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
