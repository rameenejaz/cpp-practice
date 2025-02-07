#include <iostream>
using namespace std;
class Student {
    private:
    string name;
    int age;
    int height;
    public:
    int getAge() {
        return this->age;
    }
};
int main () {
    Student s1;
    int age=s1.getAge();
    cout<<age;
}