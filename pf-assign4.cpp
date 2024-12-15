#include <iostream>
#include <string>
using namespace std;
struct Student {
    string name; //name of student
    int totalSubjects; //for total number chosen by subjects
    string subjects[4];  //name of specific subjects (max of 4 subjects)
    double marks[4]; //marks in each subject (maximum of 4 subjects)
};
void getData (Student students[], int totalStudents) {
    for (int i=0; i<totalStudents; i++) {
        cout<<"For student "<<(i+1)<<":"<<'\n';
        if (i==0) {
            cin.ignore();
        }
        cout<<"Enter name: "; //getting the name of student
        getline(cin,students[i].name);
        do {
        cout<<"Enter the number of subjects (1-4) for "<<students[i].name<<":";
        cin>>students[i].totalSubjects; //getting number of subjects
        if (students[i].totalSubjects<=0||students[i].totalSubjects>4) {
            cout<<"INVALID!! Number of subjects must be between 1-4: ";
            }
        } while(students[i].totalSubjects<=0||students[i].totalSubjects>4);
        cin.ignore();
        for (int j=0; j<students[i].totalSubjects; j++) {
            cout<<"Enter name of subject "<<(j+1)<<":";
            getline(cin,students[i].subjects[j]);
            cout<<"Enter marks for "<<students[i].subjects[j]<<":";
            cin>>students[i].marks[j];
            cin.ignore();
            }
        }
    }
void printRecords(Student students[], int totalStudents) {
    cout<<"-----DISPLAYING DATA-----"<<'\n';
    for (int i=0; i<totalStudents; i++) {
        cout<<"For student "<<(i+1)<<":"<<'\n';
        cout<<"Name: "<<students[i].name<<'\n';
        for (int j=0; j<students[i].totalSubjects; j++) {
            cout<<students[i].subjects[j]<<":"<<students[i].marks[j]<<'\n';
        }
    }
}
int main () {
    int totalStudents;
    Student students2[8]; //max of 8 students
    do {
        cout<<"Enter the number of students (1-8): ";
        cin>>totalStudents; //getting the total number of students
        if(totalStudents<=0 || totalStudents>8) {
            cout<<"INVALID!! ";
        }
    } while(totalStudents<=0 || totalStudents>8);
    // cin.ignore();
    getData(students2, totalStudents);
    printRecords(students2,totalStudents);
}