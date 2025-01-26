#include <iostream>
using namespace std;
class Hero {
    public:
    int health;
    string name;
};
int main () {
    Hero ramesh;
    ramesh.health=10;
    ramesh.name="rameen ejaz";
    cout<<"health:"<<ramesh.health<<'\n';
    cout<<"name: "<<ramesh.name<<'\n';
}