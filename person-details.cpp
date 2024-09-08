#include <iostream>
using namespace std;
int main () {
    string name;
    string city;
    string nameOfCollege;
    string proffesion;
    string typeOfAnimal;
    string petName;
    int age=0;
    
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter city name:";
    cin>>city;
    cout<<"Enter name of College:";
    cin>>nameOfCollege;
    cout<<"Enter proffesion:";
    cin>>proffesion;
    cout<<"Enter the type of animal:";
    cin>>typeOfAnimal;
    cout<<"Enter pet's name:";
    cin>>petName;
    cout<<"Enter age:";
    cin>>age;

    cout<<"There once was a person named  "<< name << " who lived in  " <<city <<". "<<"At the age of , "<<age <<name<<" went to college at "<<nameOfCollege<< " graduated and went to work as a  "<<proffesion<<"."<<"Then,"<<name<<" adopted a "<<typeOfAnimal<<" named "<<petName<<"."<<"They both lived happily ever after!";
    
}