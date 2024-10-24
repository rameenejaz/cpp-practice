#include <iostream>
using namespace std;
int main () {
    int number=0;
    int sum=0;
    float average=0;
    int const SENTINEL=-999;
    int steps=0; //total inputs in range and out of range
    int count=0; //for those in range
    int largest=0;
    int smallest=0;
    bool firstNumber=true;
    int outOfRange=0;
while (true) {
    cout<<"Enter numbers between 50 and 550 or (-999) to exit: ";
    cin>>number;
if (number== SENTINEL) {
    break;
}
if (number<50 || number>550) {
    cout<<"Invalid! ";
    outOfRange++;
}
steps++;
if (number>=50 && number<=550) {
    count++;
    sum+=number;
    if (firstNumber) {
        largest=smallest=number; //here the first number entered is equal to smallest and largest
        firstNumber=false; //now after the first input, smallest and largest are different so the comparison starts
    }
    else if (number>largest) {
        largest=number; //the largest value is now refreshed to the new one (in range)
    }
    else if (number<smallest) {
        smallest=number; //the smallest value is now refreshed to the new one (in range)
    }
}
}
if (count>0) {
cout<<"Sum: "<<sum<<'\n';
average= static_cast<float>(sum/count);
cout<<"Average: "<<average<<'\n';
cout<<"The out of range values are: "<<outOfRange<<'\n';
cout<<"The largest number is: "<<largest<<'\n';
cout<<"The smallest number is: "<<smallest<<'\n';
cout<<"Total inputs are: "<<steps<<'\n';
cout<<"Total inputs in range: "<<count<<'\n';
}
else {
    cout<<"No valid inputs!"<<'\n';
    cout<<"The out of range values are: "<<outOfRange<<'\n';
}

}
    
