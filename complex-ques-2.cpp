#include <iostream>
using namespace std;
int main () {
    int number=0;
    int sum=0;
    float average=0;
    int largest=0;
    int smallest=0;
    int count=0; //counts the total inputs in range
    int steps=0; // counts the total number of inputs
    int multiples=0; //keeps record of the inputs that are multiples of 3
    bool firstNumber=true; //used for comparison of largest and smallest number

    while (true) {
        cout<<"Enter positive values only (or negative numbers to exit): ";
        cin>>number;
        if (number<=0) {
            cout<<"Loop has been terminated"<<'\n';
            break;
        }
        steps++;
        if (number>0) {
            count++;
            sum+=number;
            if (number%3==0) {
                multiples++;
            }
            if (firstNumber) {
                largest=smallest=number;
                firstNumber=false;
            }
            if (number>largest) {
                largest=number;
            }
            else if (number<smallest) {
                smallest=number;
            }
        }
    }
        average = static_cast<float>(sum/count);
    cout<<"The total inputs are: "<<steps<<'\n';
    cout<<"The total inputs in range are: "<<steps<<'\n';
    cout<<"The sum is : "<<sum<<'\n';
    cout<<"The average is: "<<average<<'\n';
    cout<<"There are "<<multiples<<" multiples of 3 from the inputs"<<'\n';
    if (count>0) {
        cout<<"The largest number is: "<<largest<<'\n';
        cout<<"The smallest number is: "<<smallest<<'\n';
    }
    else {
        cout<<"No valid inputs were made";
    }
}