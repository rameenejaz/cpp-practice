#include <iostream>
using namespace std;
int findIltFactorial(int number) {
    int factorial=1;
    cout<<"The factorial of "<<number<<" found iteratively is: ";
    for(int i=1; i<=number; i++) {
        factorial*=i;
    }
    return factorial;
}
int findRecFactorial(int number) {
    if (number<=1) {
        return 1;
    }
    return number*findRecFactorial(number-1);
}
void printItrNum(int number) {
    int factorial=1;
    cout<<"The iterative sequence of "<<number<<" is ";
    for(int i=1; i<=number; i++) {
        cout<<i<<" ";
    }
    cout<<'\n';
}
void printRecNum(int number) {
    cout<<"The recursive sequence of "<<number<<" is ";
    for(int i=1; i<=number; i++) {
        cout<<i<<" ";
    }
    cout<<'\n';
}
int main  () {
    cout<<"Enter a number to find its factorial:";
    int inputNumber=1;
    cin>>inputNumber;
    cout<<"Press 1 to find factorial iteratively:"<<'\n';
    cout<<"Press 2 to find factorial recursively:"<<'\n';
    cout<<"Press 3 to print factorial numbers found iteratively:"<<'\n';
    cout<<"Press 4 to print factorial numbers found recursively:"<<'\n';
    cout<<"Enter an option (1,2,3,4 or 0 to exit:)";
    int option;
    cin>>option;
    int answer=-99;
    switch(option) {
        case 1:
        findIltFactorial(inputNumber);
        break;
        case 2:
        findRecFactorial(inputNumber);        
        break;
        case 3:
        printItrNum(inputNumber);
        break;
        case 4:
        printRecNum(inputNumber);
        break;
        case 0:
        return 0;
    }
}