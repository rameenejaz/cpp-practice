#include <iostream>
using namespace std;
#include <cmath>
int main () {
    float a,b,c,s;
    float area;
    cout<<"enter the value of a:";
    cin>>a;
    cout<<"enter the balue of b:";
    cin>>b;
    cout<<"enter the value of c:";
    cin>>c;

    s=(a+b+c)/2.0;
    cout<<"s="<<s<<'\n';

    area = sqrt (s*(s-a)*(s-b)*(s-c));
    cout<<"area="<<area<<'\n';


}