#include <iostream>
using namespace std;
class firstClass {
    private:
    //dynamic memory allocation
    int array[100]={0};
    int number;
    public:
    void setNumber(int number2){
        number=number2;
    }
    int getNumber() {
        return number;
    }
    void setArray(int pos, int inputNum) {
        array[pos]=inputNum;
    }
    int getArray(int pos) {
        return array[pos];
    }
};
int main () {
    firstClass class2;
    class2.setNumber(10);
    int answer=class2.getNumber();
    cout<<"the number is: "<<answer<<'\n';
    class2.setArray(10,7);
    int answer2=class2.getArray(10);
    cout<<"The answer in the array is: "<<answer<<'\n';
}