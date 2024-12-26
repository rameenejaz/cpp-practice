//finding sum and average using file handling
#include <iostream>
#include <fstream>
using namespace std;
int main () {
    ifstream inFile("file1.txt");
    if(!inFile) {
        cout<<"file not opened"<<'\n';
    }
    else{
        cout<<"file opened successfully!"<<'\n';
        int num;
        int sum=0;
        double average=0;
        int countNum=0;
        while(inFile>>num) {
            sum+=num;
            countNum++;
        }
        cout<<"The sum is: "<<sum<<'\n';
        average= (countNum>0)? static_cast<double>(sum)/countNum : 0;
        cout<<"The average is: "<<average<<'\n';
    }
    inFile.close();
    cout<<"File closed successfully!"<<'\n';
}