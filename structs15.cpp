#include <iostream>
using namespace std;
#include <string>
struct Student {
    string name;
    int rollNumber;
    float marks;
};
float findAverage(Student students[],int size) {
    float total=0.00;
    for (int i=0; i<3; i++) {
        total+=students[i].marks;
    }
    return total/size;
}
void getData(Student students[], int size) {
    for (int i=0; i<3; i++) {
        cout<<"For student "<<(i+1)<<'\n';
        cout<<"Enter name: ";
        cin.clear();
        cin.ignore();
        getline(cin,students[i].name);
        cout<<'\n';
        cout<<"Enter roll number: ";
        cin>>students[i].rollNumber;
        cout<<'\n';
        cout<<"Enter marks: ";
        cin>>students[i].marks;
        cout<<'\n';
    }
}
void displayData(Student students[], int size) {
    for (int i=0; i<3; i++) {
        cout<<"For student "<<(i+1)<<'\n';
        cout<<"name: "<<students[i].name<<'\n';
        cout<<"Roll number: "<<students[i].rollNumber<<'\n';
        cout<<"Marks: "<<students[i].marks<<'\n';
    }
}
int main () {
    Student studentList[3];
    getData(studentList,3);
    displayData(studentList,3);
    float result=findAverage(studentList,3);
    cout<<"The average is: "<<result<<'\n';
}