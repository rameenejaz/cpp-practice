#include <iostream>
using namespace std;
//finding the name and age of a student
class studentData {
    private:
    int age;
    string name;
    public:
    void setName(string inputName) {
        name=inputName;
    }
    string getName() {
        return name;
    }
    void setAge(int inputAge) {
        age=inputAge;
    }
    int getAge () {
        return age;
    }
};
int main () {
    studentData student;
    string inputName="";
    int inputAge=-999;
    int option=-99;
    char choice='z';
    while(option!=0) {
    cout<<"Choose one of the following options"<<'\n';
    cout<<"1.To get input of data from user"<<'\n';
    cout<<"2.To edit the inputted data "<<'\n';
    cout<<"3. To delete the data"<<'\n';
    cout<<"4.To print/view data"<<'\n';
    cout<<"0. To exit"<<'\n';
    cin>>option;
    switch(option) {
        case 1:
        cout<<"Enter you name: ";
        cin>>inputName;
        student.setName(inputName);
        cout<<"Enter your age:";
        cin>>inputAge;
        student.setAge(inputAge);
        break;
        case 2:
        cout<<"Do you want to update the inputted values? (Y/N)";
        cin>>choice;
        if (choice=='Y'|| choice=='y') {
            cout<<"Do you want to update name or age (N/A)";
            cin.clear();
            cin>>choice;
            if (choice=='N' || choice=='n') {
                cout<<"Enter updated name:";
                cin>>inputName;
                student.setName(inputName);
            }
            if (choice=='A' || choice=='a') {
                cout<<"Enter updated age:";
                cin>>inputAge;
                student.setAge(inputAge);
            }
        }
        else {
            return 1;
        }
        break;
        case 3:
        cout<<"Do you want to delete name or age? (N/A):";
        cin>>choice;
        if (choice=='N'|| choice=='n') {
            student.setName(nullptr);
        }
        if (choice=='A'|| choice=='a') {
            student.setAge(0);
        }
        break;
        case 4:
        cout<<"Printing results!"<<'\n';
        cout<<"Printed Name:"<<student.getName()<<'\n';
        cout<<"Age:"<<student.getAge()<<'\n';
        break;
        case 0:
        break;
    }
}
}