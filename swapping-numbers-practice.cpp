#include <iostream>
using namespace std;
int main () {
    float number_1;
    float number_2;

    cout<<"Enter a number_1:";
    cin>>number_1;
    cout<<"Enter a number_2:";
    cin>>number_2;

    number_1 = number_1 + number_2;
    number_2 = number_1 - number_2;
    number_1 = number_1 - number_2;

    cout<<"number_1 :"<<number_1<<'\n';
    cout<<"number_2 :" <<number_2<<'\n';
}