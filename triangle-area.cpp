#include <iostream>
#include <cmath>
using namespace std;

int main () {
    float a;
    float b;
    float c;
    float s=0;
    float area=0;

    cout<<"enter the value of a:";
    cin>>a;
    cout<<"enter the value of b:";
    cin>>b;
    cout<<"enter the blaue of c:";
    cin>>c;

    s=(a+b+c)/2.0;
    cout<<"s="<<s<<'\n';

    area = sqrt (s*(s-a)*(s-b)*(s-c));
    cout<<"area="<<area<<'\n';

}