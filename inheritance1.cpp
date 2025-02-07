#include <iostream>
using namespace std;
//parent class
class Human {
    public:
    int age;
    protected:
    int height;
    private:
    int weight;
    int getAge () {
        return age;
    }
    void setWeight(int updatedWeight) {
        this->weight=updatedWeight;
    }
};
//child class
class Male: public Human {
    public:
    string color;
    void sleep() {
        cout<<"male sleeping"<<'\n';
    }
    int getHeight() {
        return height;
    }
};
int main () {
    Male m1;
    // cout<<m1.weight;
    cout<<m1.getHeight();
    // cout<<m1.height;
    // Male object1;
    // cout<<object1.age<<'\n';
    // cout<<object1.color<<'\n';
    // object1.sleep();
    // cout<<object1.height<<'\n';
    // cout<<object1.weight<<'\n';
    // object1.setWeight(170);
    // cout<<object1.weight<<'\n';

}