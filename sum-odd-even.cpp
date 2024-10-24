#include <iostream>
using namespace std;
int main () {
    int number=0;
    float countEven=0;
    float countOdd=0;
    int steps=0;
    float sumEven=0;
    float sumOdd=0;
    float averageEven=0;
    float averageOdd=0;
    int largestEven=0;
    int largestOdd=0;
    int smallestEven=0;
    int smallestOdd=0;
    bool firstEven=true;
    bool firstOdd=true;

    while (true) {
        cout<<"Enter a positive value (or negative to exit): ";
        cin>>number;
        if (number<0) {
            break;
        }
        if (number%2==0) {
            countEven++;
            sumEven+=number;
                if (firstEven) {
                    largestEven=smallestEven=number;
                    firstEven=false;
                }
                if (number>largestEven) {
                    largestEven=number;
                }
                else if (number<smallestEven) {
                    smallestEven=number;
                }
        }
        steps++;
        if (number%2==1) {
            countOdd++;
            sumOdd+=number;
            if (firstOdd) {
                largestOdd=smallestOdd=number;
                firstOdd=false;
            }
            if (number>largestOdd) {
                largestOdd=number;
            }
            else if (number<smallestOdd) {
                smallestOdd=number;
            }
        }
    }
    if (countEven>0) {
        cout<<"Sum of even numbers is: "<<sumEven<<'\n';
        cout<<"Average of even numbers is: "<<(sumEven/countEven)<<'\n';
        cout<<"Largest even number: "<<largestEven<<'\n';
        cout<<"Smallest Even Number: "<<smallestEven<<'\n';
    }
    else {
        cout<<"There are no even inputs"<<'\n';
    }
    if (countOdd>0) {
        cout<<"Sum of odd numbers is: "<<sumOdd<<'\n';
        cout<<"Average of odd numbers is: "<<(sumOdd/countOdd)<<'\n';
        cout<<"Largest odd number: "<<largestOdd<<'\n';
        cout<<"Smallest odd Number: "<<smallestOdd<<'\n';
    }
    else {
        cout<<"There are no odd inputs"<<'\n';
    }
    cout<<"The total inputs are: "<<steps<<'\n';
}