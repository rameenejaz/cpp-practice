#include <iostream>
using namespace std;
#include <string>
struct Student {
    string name;
    int totalSubjects;
    double marks[4];
    string subjectName[4];
};
void getData(Student student[], int totalStudents) {
    for (int i=0; i<totalStudents; i++) {
        cout<<"Enter data for student "<<i+1<<":"<<'\n';
        if (i==0) {
            cin.ignore();
        }
        cout<<"Enter student name: ";
        getline(cin,student[i].name);
        do {
        cout<<"Enter total number of subjects: ";
        cin>>student[i].totalSubjects;
        if (student[i].totalSubjects>4 || student[i].totalSubjects<=0) {
            cout<<"INVALID!!Enter subjects between 1-4!!"<<'\n';
        }
        }while(student[i].totalSubjects>4 || student[i].totalSubjects<0);
        cin.ignore();
        for (int j=0; j<student[i].totalSubjects; j++) {
            cout<<"Enter name of subject "<<(j+1)<<":";
            getline(cin,student[i].subjectName[j]);
            cout<<"Enter marks in "<<student[i].subjectName[j]<<":";
            cin>>student[i].marks[j];
            cin.ignore();
        }
    }
}
void displayData(Student student[], int totalStudents) {
    cout<<"-----DISPLAYING DATA-----"<<'\n';
    for (int i=0; i<totalStudents; i++) {
        cout<<"For student "<<(i+1)<<":"<<'\n';
        cout<<"Name: "<<student[i].name<<'\n';
        cout<<"Total subjects chosen: "<<student[i].totalSubjects<<'\n';
        for (int j=0; j<student[i].totalSubjects; j++) {
            cout<<student[i].subjectName[j]<<":"<<(student[i].marks[j])<<'\n';
        }
    }
}
int main () {
    int totalStudents=0;
    do{
        cout<<"Enter the total number of students you want to input data for: ";
        cin>>totalStudents;
        if(totalStudents>8 || totalStudents<0) {
            cout<<"INVALID!";
        }
    }while(totalStudents>8 || totalStudents<0);
    Student student[totalStudents];
    getData(student,totalStudents);
    displayData(student, totalStudents);
}