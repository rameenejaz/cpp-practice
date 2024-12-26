#include <iostream>
using namespace std;
#include <fstream>
int main () {
    fstream inFile("part1.txt", ios::in);
    if(!inFile) {
        cout<<"File not opened"<<'\n';
    }
    else {
        int number;
        int sum=0;
        int counter=1;
        int maxValue=0;
        int countNum=1;
        cout<<"File opened successfully!"<<'\n';
        while(inFile>>number) {
            sum=0;
            maxValue=0;
            while(number!=-999) {
                sum+=number;
                countNum++;
                if(number>maxValue) {
                    maxValue=number;
                }
                inFile>>number;
                cout<<number<<" ";
            }
            cout<<'\n';
            cout<<"Line "<<counter<<": sum = "<<sum<<", Maximum number:"<<maxValue<<'\n';
            counter++;
        }
    }
    inFile.close();
    cout<<"File closed successfully!!"<<'\n';
}