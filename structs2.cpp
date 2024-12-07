//using basic arrays with structs
#include <iostream>
using namespace std;
struct Student {
    int id;
    string name;
    float grade;
};
int main () {
    Student students[3];
    for (int i=0; i<3; i++) {
        cout<<"Enter details for student "<<i+1<<'\n';
        cout<<"ID: ";
        cin>>students[i].id;
        cout<<"Name: ";
        cin.ignore();
        cin.clear();
        getline (cin,students[i].name);
        cout<<"Grade:";
        cin>>students[i].grade;
        cout<<'\n';
    }
}