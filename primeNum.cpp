#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int sum=0;
    bool isPrime=true;
    for (int i=0; i<1000; i++) {
        for (int j=0; j<sqrt(i);j++) {
            if (i%j==0) {
                isPrime=true;
                sum+=i;
            }
            if(i%j==0) {
                isPrime=false;
                break;
            }
        }
    }
        cout<<"Sum:"<<sum<<'\n';
}