#include <iostream>
using namespace std;
int score;
void getScore(int &score) {
    cout<<"Enter your score: ";
    cin>>score;
    cout<<"Course score is: "<<score<<'\n';
}
void printGrade(int &score) {
    if (score>=90)
    cout<<"A";
    else if (score>=80)
    cout<<"B";
    else if(score>=70)
    cout<<"C";
    else if (score>=60)
    cout<<"D";
    else 
    cout<<"F";
}
int main () {
    int courseGrade;
    cout<<"Based on the course score, this program computes the course grade"<<'\n';
    getScore(courseGrade);
    printGrade(courseGrade);


}