#include <iostream>
using namespace std;
class Hero {
    private:
    int health;
    public:
    string name;
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
    // Hero ramesh;
    // ramesh.health=10;
    // cout<<"health:"<<ramesh.getHealth()<<'\n';
    // ramesh.setHealth(75);
    // cout<<"health:"<<ramesh.getHealth()<<'\n';
    // ramesh.name="rameen ejaz";
    // // cout<<"health:"<<ramesh.health<<'\n';
    // cout<<"name: "<<ramesh.name<<'\n';

    //static memory allocation
    Hero a;
    a.setHealth(80);
    a.name="rameen";
    cout<<"health: "<<a.getHealth()<<'\n';
    cout<<"name: "<<a.name<<'\n';
    //dynamic allocation:
    Hero *b = new Hero;
    b->setHealth(70);
    b->setName("hulk");
    cout<<"health:"<<b->getHealth()<<'\n';
    cout<<"name:"<<b->getName()<<'\n';

}