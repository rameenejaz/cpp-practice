#include <iostream>
#include <string>
using namespace std;
struct Car{
    string model;
    int year;
    string color;
};
void printCar(Car &car) {
    cout<<car.model<<'\n';
    cout<<car.year<<'\n';
    cout<<car.color<<'\n';
}
void changePaint (Car &car, string color) {
    car.color=color;
}
int main () {
    Car car1={"Mustang",2023,"red"};
    Car car2={"ferrari",2018,"yellow"};
    changePaint(car1,"silver");
    printCar(car1);
    changePaint(car2,"gold");
    printCar(car2);
}