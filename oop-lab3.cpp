#include <iostream>
using namespace std;
class firstClass {
    private:
    int array[100]={0};
    int number;
    public:
    void setNumber(int number2){
        number=number2;
    }
    int getNumber() {
        return number;
    }
};
int main () {
    firstClass class2;
    class2.setNumber(10);
    int answer=class2.getNumber();
    cout<<"the number is: "<<answer;
}