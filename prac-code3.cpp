#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
#include <fstream>
void outputLine(int account, const string name, double balance) {
    cout<<left<<setw(10)<<account<<setw(13)<<name<<setw(7)<<setprecision(2)<<right<<balance<<'\n';
}
int main () {
    int account;
    string name;
    double balance;
    ifstream inFile("clients.txt");
    if(!inFile) {
        cout<<"File not opened"<<'\n';
    }
    else {
        cout<<"File opened"<<'\n';
        cout<<"Reading from file!"<<'\n';
        while(inFile>>account>>name>>balance) {
            // cout<<"Reading from file!"<<'\n';
            outputLine(account,name,balance);
        }
    }
}