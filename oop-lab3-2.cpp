//editing name and age of user using class
#include <iostream>
using namespace std;

class studentData {
private:
    string name="";
    int age=-999;

public:
    void setName(const string &inputName) {
        name = inputName;
    }

    void setAge(int inputAge) {
        age = inputAge;
    }

    string getName() const{
        return name;
    }

    int getAge() const {
        return age;
    }

    void resetData() {
        name = "";
        age = 0;
    }
};

void enterUserInfo(studentData &std) {
    string inputName;
    int inputAge;
    cout << "Enter name of user:";
    cin >> inputName;
    cout << "Enter age of user:";
    cin >> inputAge;
    std.setName(inputName);
    std.setAge(inputAge);
    cout << "DATA HAS BEEN ENTERED!" << '\n';
}

void editUserInfo(studentData &std) {
    char choice;
    string inputName;
    int inputAge;
    cout << "Do you want to edit name or age? (N/A):";
    cin >> choice;
    cout << '\n';
    if (choice == 'N' || choice == 'n') {
        cout << "Enter name again:";
        cin >> inputName;
        std.setName(inputName);
    } else if (choice == 'A' || choice == 'a') {
        cout << "Enter age again:";
        cin >> inputAge;
        std.setAge(inputAge);
    }
    cout << "DATA HAS BEEN EDITED" << '\n';
}

void deleteUserInfo(studentData &std) {
    std.resetData();
    cout << "DATA HAS BEEN DELETED!" << '\n';
}

void viewUserInfo(const studentData &std) {
    cout << "Name:" << std.getName() << '\n';
    cout << "Age:" << std.getAge() << '\n';
}

int main() {
    studentData std;
    int option = -99;

    while (option != 0) {
        cout << "Enter 1 to enter info of user" << '\n';
        cout << "Enter 2 to edit user info" << '\n';
        cout << "Enter 3 to delete user info" << '\n';
        cout << "Enter 4 to view user info" << '\n';
        cout << "Press 0 to exit" << '\n';
        cout << "Enter your option:";
        cin >> option;

        switch (option) {
        case 1:
            enterUserInfo(std);
            break;
        case 2:
            editUserInfo(std);
            break;
        case 3:
            deleteUserInfo(std);
            break;
        case 4:
            viewUserInfo(std);
            break;
        }
    }
}
