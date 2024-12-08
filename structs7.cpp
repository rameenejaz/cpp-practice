//managing multiple students with an array of structs
#include <iostream>
#include <string>
using namespace std;
struct Student {
    int ID;
    string name;
    float marks;
};
int main () {
    Student students1[3];
    for (int i=0; i<3;i++) {
        cout<<"Enter details for student "<<i+1<<":"<<'\n';
        cout<<"ID: ";
        cin>>students1[i].ID;
        cout<<"Name: ";
        cin.clear();
        cin.ignore();
        getline (cin,students1[i].name);
        cout<<"Marks: ";
        cin>>students1[i].marks;
        cout<<'\n';
    }
    cout<<"Displaying student information: ";
    for (int i=0; i<3; i++) {
        cout<<"Student "<<i+1<<":"<<'\n';
        cout<<"ID: "<<students1[i].ID<<'\n';
        cout<<"Name: "<<students1[i].name<<'\n';
        cout<<"Grade: "<<students1[i].marks<<'\n';
        cout<<'\n';
    }
}