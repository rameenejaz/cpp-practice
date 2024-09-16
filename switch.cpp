#include <iostream>
using namespace std;
int main () {
    char ch = 'a';
    switch(ch) {
    case 1: cout<<"First"<<'\n';
        break;
    case '2': cout<<"Character two"<<'\n';
        break;
    default: cout<<"It is the default case"<<'\n';
        
    }

    return 0;
}