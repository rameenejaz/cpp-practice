#include <iostream>
#include <fstream>
using namespace std;
int main () {
    ifstream inFile("part1.txt");
    if(!inFile) {
        cout<<"File not opened!"<<'\n';
    }
    else {
        int sum=0;
        int counter=1;
        int maxValue=0;
        int num=0;
        cout<<"File opened successfully!"<<'\n';
        while(inFile>>num) {
        sum=0;
        maxValue=0;
        while(num!=-999){
            sum+=num;
            if(num>maxValue) {
                maxValue=num;
            }
                inFile>>num;
        }
        cout<<"Line "<<counter<<":"<<" Maximum Value = "<<maxValue<<", Sum = "<<sum<<'\n';
        counter++;
    }
    inFile.close();
    cout<<"File closed successfully!"<<'\n';
}
}