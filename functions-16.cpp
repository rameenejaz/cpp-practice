#include <iostream>
using namespace std;
void displayName(){
cout << "********************************************" << endl;
cout << "*** PROGRAMMING FUNDAMENTALS-LAB ***" << endl;
cout << "*** LAB WEEK 8 ***" << endl;
cout << "*** FA24-BSE-160 ***" << endl;
cout << "*** RAMEEN MUZAMMIL EJAZ ***" << endl;
cout << "********************************************" << endl;
}
void swapNum(int &num1, int &num2) {
    int temp=num1;
    num1=num2;
    num2=temp;
}
int sumNum(int num1, int num2) {
    return num1+num2;
}
void inputValues(int &num1, int &num2) {
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
}
int difference(int num1, int num2) {
    if (num1>num2) {
        return num1-num2;
    }
    return num2-num1;
}
int main () {
    displayName();
    int a;
    int b;
    inputValues(a,b);
    cout<<"Swapped values:"<<'\n';
    swapNum(a,b);
    cout<<"First number:"<<a<<'\n';
    cout<<"Second number:"<<b<<'\n';
    int add=sumNum(a,b);
    cout<<"Sum of the numbers:"<<add<<'\n';
    int answer=difference(a,b);
    cout<<"Difference of the numbers:"<<answer<<'\n';

}
