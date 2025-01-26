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
};
int main () {
    //statically made:
    Hero rameen;
    //dynamically made:
    Hero *h=new Hero;
    
}