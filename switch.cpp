#include <iostream>
using namespace std;
int main () {
    char ch = '1';
    int num=1;
    
    cout<<'\n';
    switch (ch) {
        case 1: cout<<"first"<<'\n';
            cout<<"First again"<<'\n';
        break;
        
        case '1': switch (num) {
            case 1: cout<<"Value of num is "<<num<<'\n';
            break;
        }
        break;

        default: cout<<"It is the default case"<<'\n';
    }
    }
