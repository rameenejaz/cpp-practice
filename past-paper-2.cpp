#include <iostream>
using namespace std;
#include <string>
#include <iomanip>
struct employeeType{
    string firstName;
    string lastName;
    int age;
    double testMarks;
    char grade;
};
void getEmployees(employeeType employees[], int numOfEmp) {
    int choice;
    int counter=1;
    int minMarks=0;
    // cout<<"1: Read data of employees"<<'\n';
    // cout<<"2: Compute the test grade of each employee"<<'\n';
    // cout<<"3: Get the employee of highest marks"<<'\n';
    // cout<<"4: Get the employee of lowest marks"<<'\n';
    // cout<<"5: Print the data of all employees"<<'\n';
    // cout<<"6: To quit from program"<<'\n';
    // cout<<"Enter your choice: ";
    // cin>>choice;
    while(choice<1 || choice>6) {
        cout<<"INVALID! Enter choice between 1-6: ";
        cin.clear();
        cin.ignore();
        cin>>choice;
    }
        // cout<<"Enter how many employees data you want to add: ";
        // cin>>numOfEmp;
        cout<<'\n';
        for (int i=0; i<numOfEmp; i++) {
                cout<<"Enter employee "<<counter<<" data:"<<'\n';
                cout<<"Enter first name: ";
                cin>>employees[i].firstName;
                cout<<"Enter last name: ";
                cin>>employees[i].lastName;
                cout<<"Enter age: ";
                cin>>employees[i].age;
                while (employees[i].age<25 || employees[i].age>35) {
                    cout<<"Employee age must be between 25 and 35: ";
                    cin.clear();
                    cin.ignore();
                    cin>>employees[i].age;
                }
                cout<<"Enter test marks: ";
                cin>>employees[i].testMarks;
                counter++;
                }
        cout<<"Data Entered successfully!"<<'\n';
}
void assignTestMarks(employees employees[]) {
    if(employees[i].testMarks>=90 && employees[i].testMarks<=100) {
        employees[i].grade='A';
        cout<<employees[i].grade;
    }
    else if (employees[i].testMarks>=80 && employees[i].testMarks<=89) {
        employees[i].grade='B';
        cout<<employees[i].grade;

    }
    else if (employees[i].testMarks>=70 && employees[i].testMarks<=79) {
        employees[i].grade='C';
        cout<<employees[i].grade;

    }
    else if (employees[i].testMarks>=60 && employees[i].testMarks<=69) {
        employees[i].grade='D';
        cout<<employees[i].grade;

    }
    else if (employees[i].testMarks>=50 && employees[i].testMarks<=59) {
        employees[i].grade='E';
        cout<<employees[i].grade;
    }
    else {
        employees[i].grade='F';
        cout<<employees[i].grade;

    }
    cout<<"Grade computed successfully"<<'\n';
    }
void getMaxMarks(employeeType employees[]) {

    if(employees[i].testMarks>maxMarks) {
        maxMarks=employees[i].testMarks
    }
}
int main () {
    const int maxSize=5;
    employeeType employeeData[maxSize];
    getEmployees(employeeData);
}