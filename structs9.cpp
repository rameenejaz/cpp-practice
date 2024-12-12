//lab activity 1
#include <iostream>
using namespace std;
#include <string>
struct person {
    string name;
    int age;
    double salary;
};
void display(person &p) {
    cout<<"Display data (with functions)"<<'\n';
    cout<<"Name: "<<p.name<<'\n';
    cout<<"Age: "<<p.age<<'\n';
    cout<<"Salary: "<<p.salary<<'\n';
}
person getData(person p) {
    cout<<"Getting data from user: "<<'\n';
    cout<<"Enter full name: ";
    getline(cin,p.name);
    cout<<'\n';
    cout<<"Enter age: ";
    cin>>p.age;
    cout<<'\n';
    cout<<"Enter the salary: ";
    cin>>p.salary;
    return p; //returning the entire structure of person which includes name,age and salary
}
int main () {
    person p,p2;
    p2=getData(p);
    display(p2);
}