#include <iostream>
using namespace std;
#include <string>
struct Student {
    int ID;
    string name;
    float marks;
};
void displayStudent(Student s) {
    cout<<"Student Info (Pass by value): "<<'\n';
    cout<<"ID: "<<s.ID<<'\n';
    cout<<"Name: "<<s.name<<'\n';
    cout<<"Grade: "<<s.marks<<'\n';
    cout<<'\n';
}
void updateMarks(Student &s, float newMarks) {
    s.marks=newMarks;
}
int main () {
    Student student1={101,"alice",88.5};
    displayStudent(student1);
    cout<<"Updating grade: "<<'\n';
    updateMarks(student1, 90.90);
    displayStudent(student1);
}