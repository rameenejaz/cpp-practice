#include <iostream>
using namespace std;
int square (int number) {
    number*=number;
    return number;
}
int main () {
    int (*funcPtr) (int)=square;
    int num=5;
    cout<<"The square of "<<num<<": "<<funcPtr(num)<<'\n';
}