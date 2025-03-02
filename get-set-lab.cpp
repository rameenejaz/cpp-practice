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
        break;
        case 3:
        break;
        case 4:
        break;
        case 0:
        break;
    }
}