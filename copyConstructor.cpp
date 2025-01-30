#include <iostream>
using namespace std;
class Hero {
    private:
    int health;
    public:
    string name;
    //invoke the default constructor:
    Hero () {
        cout<<"Constructor Made!"<<'\n';
    }
    void print () {
        cout<<"health:"<<health<<'\n';
        cout<<"name:"<<name<<'\n';
    }
    //to get the health
    int getHealth() {
        return health;
    }
    string getName() {
        return name;
    }
    //to set health
    void setHealth(int h) {
        health=h;
    }
    void setName(string newName) {
        name=newName;
    }
    Hero (int health) {
        this ->health=health;
    }
    Hero (int health, string name) {
        this ->health=health;
        this ->name=name;
    }
    //copy constructor:
    Hero (Hero const &temp) {
        cout<<"Copy constructor called!"<<'\n';
        this->health=temp.health;
        this->name=temp.name;
    }
};
int main () {
    Hero S(10,"donald");
    S.print();
    Hero R(S);
    R.print();

}