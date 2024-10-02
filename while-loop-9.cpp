#include <iostream>
using namespace std;
int main () {
    //taking input from user where his score must be greateer than zero and less than 50 by using do-while loop
    int score=0;
    
    do {
        cout<<"Enter your score: ";
        cin>>score;
    }
    while (score>0 || score<=50); 
}