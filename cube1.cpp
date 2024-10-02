//finding the cube of a number
#include <iostream>
using namespace std;
int main () {
    int cubeOfNumber=0;
    int number;
    cout<<"Enter the number to cube:";
    cin>>number;
    cubeOfNumber=(number*number*number);
    cout<<"The cube of "<<number<<" is "<<cubeOfNumber;
}