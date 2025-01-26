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
};
int main () {
    //statically made:
    Hero rameen(10);
    rameen.print();
    //dynamically made:
    Hero *h=new Hero(11);
    h->print();

    Hero temp(10,"reema");
    temp.print();
    

}