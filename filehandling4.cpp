#include <iostream>
using namespace std;
#include <fstream>
int main (){
    ofstream fsout("sample01.txt");
    fsout<<"Helllo everyone";
    fsout.close();
}