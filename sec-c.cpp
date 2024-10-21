#include <iostream>
using namespace std;
int main () {
    int lowerLimit=0;
    int upperLimit=0;
    int sum=0;
    cout<<"Enter the start of this range: ";
    cin>>lowerLimit;
    cout<<"Enter the end of this range: ";
    cin>>upperLimit;
    if (lowerLimit>upperLimit || lowerLimit<1 || upperLimit<1) {
        cout<<"ERROR, INVALID INPUT, enter positive values and lower limit must be greater than upper limit";
    }
        else {
            cout<<"The composite numbers are: ";
            for (int i=lowerLimit; i<=upperLimit; i++) {
                int divisor=0;
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
              cout<<"The sum of all composite numbers is: "<<sum;
        }
}