#include <iostream>
using namespace std;

int main () {
    float length=0;
    float area=0;
    float perimeter=0;

    cout<<"Enter the value of length:";
    cin>>length;

    area = length*length;
    perimeter = 4*(length);
    cout<<"area ="<<area<<'\n';
    cout<<"perimeter ="<<perimeter<<'\n';

}