#include <iostream>
using namespace std;

int main () {
    float BMI;
    float weight;
    float height;

    cout<<"Enter your weight in kilograms:";
    cin>>weight;
    cout<<"Enter your height in feet:";
    cin>>height;

    BMI = weight / (height*height);
    cout<<"BMI = "<<BMI<<'\n';



}