#include <iostream>
#include <fstream>
using namespace std;
#include <iomanip>
struct Client {
    int account;
    string name;
    double balance;
};
void outputLine (const Client &client) {
    cout<<left<<setw(10)<<client.account<<setw(13)<<client.name<<setw(7)<<right<<fixed<<setprecision(2)<<client.balance<<'\n';
}
void displayClients(const Client clients[], int size) {
    cout<<left<<setw(10)<<"Account"<<setw(13)<<"Name"<<"Balance"<<'\n';
    for (int i=0; i<size; i++) {
        outputLine(clients[i]);
    }

}
int main () {
    const int size=10;
    int clientCount=0;
    Client clients[size];
    Client client;
    ifstream inClientFile("clients.txt");
    if(!inClientFile) {
        cout<<"File not opened"<<'\n';
        return 1;
    }
    while(inClientFile>>clients[clientCount].account>>clients[clientCount].name>>clients[clientCount].balance) {
        clientCount++;
    }
    inClientFile.close();
    cout<<"File closed successfully"<<'\n';
    displayClients(clients,clientCount);

}