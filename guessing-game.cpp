#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
int main () {
    cout<<"****GUESSING GAME****"<<'\n';
    int number=0;
    int guess=0;
    bool isGuess=false;
    srand(time(0));
    number=rand() %100;
    while (!isGuess) {
        cout<<"Enter a number between 0 and 99: ";
        cin>>guess;
        cout<<'\n';
        if (guess==number) {
            cout<<"You have guessed correctly!!"<<'\n';
        }
        else if (guess>number) {
            cout<<"Your guess is greater than the number :( "<<'\n';
        }
        else if (guess<number) {
            cout<<"Your guess is way less than the number :( "<<'\n';
        }

    } 
}