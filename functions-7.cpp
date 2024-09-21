#include <iostream>
using namespace std;
int subtract (int num1,int num2) {
   int minus = num1-num2; 
    return minus;

}
int main () {
    int num1=0;
    int num2=0;
    int answer=0;
    cout<<"Enter the value of number 1: ";
    cin>>num1;
    cout<<"Enter the value of number 2: ";
    cin>>num2;
    
    answer = subtract (num1,num2);
    cout<<"The answer is: "<<answer<<'\n';


}