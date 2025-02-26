#include <iostream>
using namespace std;
class Hero {
    private:
    int health;
    public:
    char level;
    //invoke the default constructor:
    Hero () {
        cout<<"Constructor Made!"<<'\n';
    }
    void print () {
        cout<<"level:"<<level<<'\n';
    }
    //to get the health
    int getHealth() {
        return health;
    }
    char getLevel() {
        return level;
    }
    //to set health
    void setHealth(int h) {
        health=h;
    }
    void setLevel(char level) {
        this->level=level;
    }
    Hero (int health) {
        this->health=health;
    }
    Hero (int health, char level) {
        this->health=health;
        this->level=level;
    }
};
int main () {
    //statically made:
    Hero rameen(10);
    rameen.print();
    //dynamically made:
    Hero *h=new Hero(11);
    h->print();
    
    

}