#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int ID;
    char ch;
    string name;
    int num, sum;
    ifstream infile;
    infile.open("ID.txt");
    infile >> ID;
    while (infile)
        {
            infile.get(ch);
            getline(infile, name);
            sum = 0;
            infile >> num; // read the first number
            while (num!=-999) {
                sum+=num;
                infile>>num;
            }
            cout<<"Name: "<<name<<", Votes:"<<sum<<'\n';
            infile>>ID;
 }
 }


//  #include <iostream>
// #include <fstream>
// using namespace std;
// int main () {
//     int ID;
//     string name;
//     int num;
//     int sum=0;
//     ifstream inFile("ID.txt");
//     inFile>>ID;
//     if(!inFile) {
//         cout<<"Error, file not opening!"<<'\n';
//         return 1;
//     }
//     else {
//         cout<<"File opened successfully!"<<'\n';
//         while(inFile>>ID>>name) {
//         cout<<"Reading record for: "<<name<<"ID: "<<ID<<'\n';
//         sum=0;
//         //getline(inFile,name);
//         //inFile>>num;
//         while(inFile>>num && num!=-999) {
//             sum+=num; 
//         }
//         cout<<"ID:"<<ID<<"Name: "<<name<<", votes: "<<sum<<'\n';
//     }
//     }
//     inFile.close();
//     cout<<"File closed successfully!"<<'\n';
// }