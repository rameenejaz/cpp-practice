#include <iostream>
#include <fstream>
using namespace std;
int main () {
    int counter=0;
    int num;
    int sum=0;
    ifstream inFile("numbers.txt");
    inFile>>num; //first number is read from the file into num
    if (!inFile) {
        cout<<"Error, file not opening!"<<'\n';
        return 1;
    }
    while(inFile>>num) {
        sum=0;
        while(num!=-999) {
            sum+=num;
            inFile>>num;
        }
        cout<<"Line "<<counter+1<<": Sum="<<sum<<'\n';
        counter++;
    }
}