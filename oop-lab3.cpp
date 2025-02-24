#include <iostream>
using namespace std;
class studentData{
    private:
    string name;
    int age;
    public:
    void enterInfo(string &inputName, int &inputAge) {
        name=inputName;
        age=inputAge;
        cout<<"DATA HAS BEEN ENTERED!"<<'\n';
    }
    void editInfo(string &inputName, int &inputAge ) {
        name=inputName;
        age=inputAge;
        // char choice;
        // char choice2;
        // do {
        //     cout<<"Do you want to edit student information? (Y/N):";
        //     cin>>choice;
        //     cout<<'\n';
        //     if (choice=='Y' || choice=='y') {
        //         cout<<"Do you want to edit name or age?(N/A):";
        //         cin>>choice2;
        //         cout<<'\n';
        //         if (choice2=='N'|| choice2=='n'){
        //             break;
        //         }
        //         if (choice2=='A'|| choice=='a'){
        //             cout<<"Enter age again:";
        //             cin>>inputAge;
        //             age=inputAge;
        //             cout<< age;
        //             cout<<'\n';
        //         }
        //     }
        // }while (choice=='Y' || choice=='y');
        // cout<<"DATA HAS BEEN EDITED"<<'\n';
    }
    void deleteData() {
        name=nullptr;
        age=0;
        cout<<"DATA HAS BEEN DELETED!"<<'\n';
    }
    // void viewData() {
    //     cout<<"Name:"<<name;
    //     cout<<"Age:"<<Age;
    // }

};
int main () {
    studentData std;
    cout<<"Enter 1 to enter info of user"<<'\n';
    cout<<"Enter 2 to edit user info"<<'\n';
    cout<<"Enter 3 to delete user info"<<'\n';
    cout<<"Enter 4 to view user info"<<'\n';
    cout<<"Press 0 to exit"<<'\n';
    int option=-99;
    int answer=-999;
    cout<<"Enter name of user:";
    int inputAge=-88;
    string inputName;
    cin >>inputName;
    cout<<"Enter age of user:";
    cin>>inputAge;
    cout<<'\n';
    while (option!=0){
        cout<<"Enter your option:";
        cin>>option;
        switch(option) {
            case 1:
            std.enterInfo(inputName, inputAge);
            break;
            case 2:
            char choice;
        char choice2;
        do {
            cout<<"Do you want to edit student information? (Y/N):";
            cin>>choice;
            cout<<'\n';
            if (choice=='Y' || choice=='y') {
                cout<<"Do you want to edit name or age?(N/A):";
                cin>>choice2;
                cout<<'\n';
                if (choice2=='N'|| choice2=='n'){
                    break;
                }
                if (choice2=='A'|| choice=='a'){
                    cout<<"Enter age again:";
                    cin>>inputAge;
                    age=inputAge;
                    cout<< age;
                    cout<<'\n';
                }
            }
        }while (choice=='Y' || choice=='y');
        cout<<"DATA HAS BEEN EDITED"<<'\n';
            std.editInfo();
            break;
            case 3:
            std.deleteData();
            // case 4:
        }
    }
}