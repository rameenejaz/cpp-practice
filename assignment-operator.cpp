#include <iostream>
#include <cstring>
using namespace std;
class Hero {
    private:
    int health;
    public:
    char level;
    char *name; //can be written as char *name[100] but this is not good practice, here it is allocated on heap where more space is available
    //invoke the default constructor:
    Hero () {
        name=new char[100];
        cout<<"Simple constructor Made!"<<'\n';
        // name= new char name[100];
    }
    void print () {
        cout<<"[name:"<<this->name<<",";
        cout<<"health:"<<this->health<<",";
        cout<<"level:"<<this->level<<"]"<<'\n';
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
    void setLevel(char newLevel) {
        level=newLevel;
    }
    // void setName(char name[]) {
    //     strcpy(this->name, name);
    // }

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
        //deep copy here by making an entirely different array
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        this->health=temp.health;
        this->level=temp.level;
    }
    void setName(char name[]) {
        strcpy(this->name, name);
    }
};
int main () {
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('A');
    char name[7]="Babbar";
    hero1.setName(name);
    // hero1.print();
    cout<<"Making a second hero using the default copy constructor:"<<'\n';
    Hero hero2(hero1);
    // hero2.print();
    cout<<"Changing name of hero 1:"<<'\n';
    hero1.name[0]='G';
    hero1.print();
    cout<<"printing second hero details"<<'\n';
    hero2.print();

    //using the assignment operator:
    hero1=hero2;
    hero1.print();
    hero2.print();


}