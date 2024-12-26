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
void inputMenu(int &choice) {
    do {
    cout<<"1: Read data of employees"<<'\n';
    cout<<"2: Compute the test grade of each employee"<<'\n';
    cout<<"3: Get the employee of highest marks"<<'\n';
    cout<<"4: Get the employee of lowest marks"<<'\n';
    cout<<"5: Print the data of all employees"<<'\n';
    cout<<"6: To quit from program"<<'\n';
    cout<<"Enter your choice: ";
    cin>>choice;
    if (choice<1 || choice>6) {
        cout<<"INVALID! Enter choice between 1-6: ";
        cin.clear();
        cin.ignore();
    }
    }while(choice<1 || choice>6);
}
void getEmployees(employeeType employees[], int &numOfEmp) {
    int counter=1;
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
        cout<<"Records Entered successfully!"<<'\n';
}
void assignTestGrade(employeeType employees[], int &numOfEmp ) {
    for (int i=0; i<numOfEmp; i++) {
        if(employees[i].testMarks>=90 && employees[i].testMarks<=100) {
        employees[i].grade='A';
    }
    else if (employees[i].testMarks>=80 && employees[i].testMarks<=89) {
        employees[i].grade='B';
    }
    else if (employees[i].testMarks>=70 && employees[i].testMarks<=79) {
        employees[i].grade='C';
    }
    else if (employees[i].testMarks>=60 && employees[i].testMarks<=69) {
        employees[i].grade='D';
    }
    else if (employees[i].testMarks>=50 && employees[i].testMarks<=59) {
        employees[i].grade='E';
    }
    else {
        employees[i].grade='F';
    }
    }
    cout<<"Grade computed successfully"<<'\n';
}
void getMaxMarks(employeeType employees[], int &numOfEmp) {
    double maxMarks=employees[0].testMarks;
    int maxIndex=0;
    for(int i=0; i<numOfEmp; i++) {
        if(employees[i].testMarks>maxMarks) {
            maxMarks=employees[i].testMarks;
            maxIndex=i;
        }
    }
        cout<<employees[maxIndex].firstName<<" "<<employees[maxIndex].lastName<<" has "<<employees[maxIndex].testMarks<<" test marks."<<'\n';
}
void getMinMarks(employeeType employees[], int &numOfEmp) {
    double minMarks=employees[0].testMarks;
    for(int i=0; i<numOfEmp; i++) {
        if(employees[i].testMarks<minMarks) {
            minMarks=employees[i].testMarks;
        }
    }
            cout<<employees[i].firstName<<" "<<employees[i].lastName<<" has "<<minMarks<<" test marks."<<'\n';
}
void printEmployeeData(employeeType employees[], int &numOfEmp) {
    cout<<left<<setw(30)<<"Name"<<setw(10)<<"Age"<<setw(20)<<"Test Score"<<setw(10)<<"Grade"<<'\n';
    for (int j=0; j<70; j++) {
        cout<<"-";
    }
    cout<<'\n';
    for(int i=0; i<numOfEmp; i++) {
        cout<<left<<setw(30)<<(employees[i].lastName+ "," + employees[i].firstName)<<setw(10)<<employees[i].age<<fixed<<setw(20)<<fixed<<setprecision(2)<<employees[i].testMarks<<fixed<<setw(10)<<employees[i].grade<<'\n';
    }
}
int main () {
    int numOfEmp=0;
    int choice;
    int maxSize=5;
    employeeType employees[maxSize];
    do {
        inputMenu(choice);
        switch(choice) {
        case 1:
        cout<<"Enter how many employees data you want: ";
        cin>>numOfEmp;
        getEmployees(employees,numOfEmp);
        break;
        case 2:
        assignTestGrade(employees,numOfEmp);
        break;
        case 3:
        getMaxMarks(employees,numOfEmp);
        break;
        case 4:
        getMinMarks(employees,numOfEmp);
        break;
        case 5:
        printEmployeeData(employees,numOfEmp);
        break;
        case 6:
        cout<<"Program has been exited!!"<<'\n';
        break;
        }
    }while(choice!=6);
}
