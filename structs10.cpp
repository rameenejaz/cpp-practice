//lab activity 2
#include <iostream>
using namespace std;
#include <string>
struct person {
    string name;
    int age;
    double salary;
};
void display (person p[], int size) {
    cout<<"Displaying Information:  "<<'\n';
    for (int i=0; i<size; i++) {
        cout<<"For person "<<(i+1)<<'\n';
        cout<<"Name: "<<p[i].name<<'\n';
        cout<<"Age: "<<p[i].age<<'\n';
        cout<<"Salary: "<<p[i].salary<<'\n';
    }
}
void getData(person p[], int size ) {
    for (int i=0; i<size; i++) {
        cout<<"For person "<<(i+1)<<'\n';
        cout<<"Enter name: ";
        cin.ignore();
        getline (cin, p[i].name);
        cout<<'\n';
        cout<<"Enter age: ";
        cin>>p[i].age;
        cout<<'\n';
        cout<<"Enter salary: ";
        cin>>p[i].salary;
    }
}
int main () {
    int size=0;
    cout<<"Enter the size of array: ";
    cin>>size;
    person p[size];
    getData(p,size);
    display(p,size);
}