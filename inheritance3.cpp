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
    

}