#include <iostream>
using namespace std;
int power(int a, int b) 
    int answer=1;
    for (int i=1; i<=b; i++) {
        answer=answer*a;
    }
    return answer;
}
int main () {
    int a;
    int b;
    cout<<"Enter values for a and b: ";
    cin>>a>>b;
    cout<<"The answer is "<<power(a,b)<<'\n';
    }