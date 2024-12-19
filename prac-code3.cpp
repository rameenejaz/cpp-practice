#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
#include <fstream>
void outputLine(int, const string, double);
void outputLine(int account, const string name, double balance) {
    cout<<left<<setw(10)<<account<<setw(13)<<name<<setw(7)<<setprecision(2)<<right<<balance<<'\n';
}
int main () {
    ifstream inClientFile("clients.txt");
    if(!inClientFile) {
        cout<<"File could not be opened!"<<'\n';
    }
    int account;
    string name;
    double balance;
    cout<<left<<setw(10)<<"Acoount: "<<setw(13)<<"Name"<<"Balance"<<'\n'<<fixed<<showpoint;
    while(inClientFile>>account>>name>>balance) {
        outputLine(account,name,balance);
    }
}