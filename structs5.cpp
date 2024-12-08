//nested structs
#include <iostream>
using namespace std;
#include <string>
struct Date {
    int day, month, year;
};
struct Student {
    int ID;
    string name;
    Date dob;
};
int main () {
    Student students1={160,"rameen", {17,3,2007}};
    cout<<students1.name<<" with student ID:"<<students1.ID<<" ,DOB: "<<students1.dob.day<<"/"<<students1.dob.month<<"/"<<students1.dob.year<<'\n';
    Student *ptr=&students1;
    cout<<"name: "<<ptr->name<<'\n';
    cout<<"ID: "<<ptr->ID<<'\n';
}