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
        cout<<"health:"<<health<<'\n';
        cout<<"level:"<<level<<'\n';
    }
    //to get the health
    int getHealth() {
        return health;
    }
    char getName() {
        return level;
    }
    //to set health
    void setHealth(int h) {
        health=h;
    }
    void setName(char newLevel) {
        level=newLevel;
    }
    Hero (int health) {
        this->health=health;
    }
    Hero (int health, char level) {
        this ->health=health;
        this ->level=level;
    }
    //copy constructor:
    Hero (Hero const &temp) {
        cout<<"Copy constructor called!"<<'\n';
        this->health=temp.health;
        this->level=temp.level;
    }
};
int main () {
    Hero S(10,'A');
    S.print();
    Hero R(S);
    R.print();

}