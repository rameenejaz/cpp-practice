//repitition control structure (lab 06)
#include <iostream>
using namespace std;
int main () {
//graded lab task 1:
    // int inputValue;
    // int result;
    // int steps=0;
    // cout<<"Enter the initial value: ";
    // cin>>inputValue;
    // while (inputValue<1) {
    //     cin.clear();
    //     cin.ignore();
    //     cout<<"Error, enter a positive number: ";
    //     cin>>inputValue;
    // }
    // while (inputValue>=1) {
    //     if (inputValue%2==0 ) {
    //         inputValue/=2;
    //         cout<<"Next value is: "<<inputValue<<'\n';
    //         steps++;        
    //         }
    //     else if (inputValue%2==1 ) {
    //         inputValue=(inputValue*3)+1;
    //          cout<<"Next value is: "<<inputValue<<'\n';
    //         steps++;
    //     }
    //     if (inputValue==1){
    //             break;
    //     }
        
    //     }
    //     cout<<"The final value is: 1, the number of steps are: "<<steps;

//graded lab task 2
// int num1;
//     int num2;
//     int sum=0;
//     int totalIntegers=0;
//     while (num1>0 && num2>0) {
//         cout<<"Enter a pair of positive integers: ";
//         cin>>num1>>num2;
//         if (num1%num2==0) {
//             cout<<"Loop is ended"<<'\n';
//             totalIntegers+=2;
//             break;
//         } 
//         sum=num1+num2;
//         cout<<"Sum is: "<<sum<<'\n';
//         totalIntegers+=2;
//     }
//             cout<<"Total integers entered "<<totalIntegers;

// graded lab task 3
//   char pattern;
//     int choice;
//     do {
//         cout<<"Choose which pattern to print (A,B,C or D): ";
//         cin>>pattern;
        
//         if (pattern=='A' || pattern=='a') {
//             for (int i=1; i<=10; i++) {
//      for (int j=1; j<=i; j++) {
//            cout<<"*";
//      }
//       cout<<'\n';
//     }
//         }
//         else if (pattern=='B'||pattern=='b') {
//             for (int i=10; i>=1; i--) {
//                 for (int j=1; j<=i; j++) {
//             cout<<"*";
//         }
//         cout<<'\n';
//     }
//         }
//         else if (pattern=='C'|| pattern=='c'){
//         for (int i=10; i>=1; i--) {
//             for (int j=(10-i); j>=1; j--) {
//         cout<<" ";
//     }
//         for (int j=i; j>=1; j--) {
//         cout<<"*";
//     }
//     cout<<'\n';
//     }   
//         }
//         else if (pattern=='D'||pattern=='d'){
//     for (int i=1; i<=10; i++) {
//         for (int j=1; j<=(10-i); j++ ) {
//         cout<<" ";
//     }
//     for (int j=1; j<=i; j++) {
//         cout<<"*";
//     }
//     cout<<'\n';
//    }
//         }
//         else {
//             cout<<"Wrong input!, Enter again! "<<'\n';
            
//         }
//         cout<<"Do you want to print any of the patterns again? (Enter 1 for true and 0 for false): ";
//         cin>>choice;
        
//         }while(choice==1);
//         cout<<"End of program";

// graded lab task 4
int number;
cout<<"Enter a number from 1-9: ";
cin>>number;
for (int i=1; i<=number; i++) {
    for (int j=1; j<=i; j++) {
        cout<<j;
    }
    cout<<'\n';
}

}

        