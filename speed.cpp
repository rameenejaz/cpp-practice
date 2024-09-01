#include <iostream>
using namespace std;

int main () {
    float speed;
    float distance;
    float time;

    cout<<"Enter a value for distance covered:";
    cin>>distance;
    cout<<"Enter a value for time taken:";
    cin>>time;

    speed = distance * time;
    cout<<"speed = "<<speed<<'\n';

}