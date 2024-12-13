#include <iostream>
using namespace std;
#include <string>
struct menuItemType{
    string menuItem;
    double menuPrice;
};
void getData(menuItemType menuList[]) {
    menuList[0]={"Plain Egg",1.45};
    menuList[1]={"Bacon and Egg",2.45};
    menuList[2]={"Muffin",0.99};
    menuList[3]={"French Toast",1.99};
    menuList[4]={"Fruit Basket", 2.49};
    menuList[5]={"Cereal",0.69};
    menuList[6]={"Coffee",0.50};
    menuList[7]={"Tea",0.75};
}
int main () {
    int const size=8;
    menuItemType menuList[size];
    
}