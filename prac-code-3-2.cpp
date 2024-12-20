#include <iostream>
#include <fstream>
using namespace std;

    //defining structs
    struct Student {
    int ID;
    string name;
    float gpa;
    };
void writeToFile(const string &fileData) {
    ofstream outFile("fileData.txt", ios::out); //for writing
    if(!outFile) {
        cout<<"Error! File not opened for writing"<<'\n';
    }
    Student student={1,"Rameen",3.8};
    outFile<<student.ID<<'\n';
    outFile<<student.name<<'\n';
    outFile<<student.gpa<<'\n';
    outFile.close();
    cout<<"Data has been written successfully"<<'\n';
}
int main () {
    string fileName="fileData.txt";
    writeToFile(fileName);
}