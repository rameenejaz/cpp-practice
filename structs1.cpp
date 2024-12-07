//basic structs question
#include <iostream>
using namespace std;
struct Student {
        int id;
        string name;
        float grade;
    };
int main () {
    Student student1;
    student1.id=101;
    student1.name="rameen";
    student1.grade=55.5;
    cout<<"Student information: "<<'\n';
    cout<<"ID: "<<student1.id<<'\n';
    cout<<"Name: "<<student1.name<<'\n';
    cout<<"Grade: "<<student1.grade<<'\n';
    }