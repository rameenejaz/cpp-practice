#include <iostream>
using namespace std;
struct Student {
    int id;
    string name;
    float grade;
};
void displayStudent (Student s) {
    cout<<"ID: "<<s.id<<", Name: "<<s.name<<", Grade: "<<s.grade<<'\n';
}
int main () {
    Student student1={101,"alice",95.5};
    displayStudent(student1);
    
}