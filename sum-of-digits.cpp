#include <iostream>
using namespace std;
int main () {
    int number=0;
    int remainingNum=0;
    int sum=0;
    cout<<"Enter a number to find the sum of digits: ";
    cin>>number;

   while (number>0) {
   sum=sum + (number%10);
   number=number/10;
   }
   cout<<"The sum of the numbers= "<<sum<<'\n';
}