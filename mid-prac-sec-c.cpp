#include <iostream>
using namespace std;
int main () {
    int lowerLimit=1;
    int upperLimit=1;
    int sum=0;
    int divisor=0;
    int compNum;
    cout<<"Enter the start of the range: ";
    cin>>lowerLimit;
    cout<<"Enter the end of the range: ";
    cin>>upperLimit;
    
    if (lowerLimit>=upperLimit || lowerLimit<1 || upperLimit<1 ) {
        cout<<"INVALID RANGE, Please ensure the start is less than or equal to the end, and both integers are positive";
        } 
    else  {
        cout<<"The composite numbers between "<<lowerLimit<<" and "<<upperLimit<<" are: ";
    for (int i=lowerLimit; i<=upperLimit; i++) {
        for (int j=1; j<=i; j++) {
            if (i%j==0) {
                divisor++;
                }
            }
            if (divisor>2) {
                cout<<i<<" ";
                sum+=i;
        }
        }
            cout<<"Sum of composite numbers is: "<<sum;
}
}
    
