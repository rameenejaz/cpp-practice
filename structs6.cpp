//practical use of structs
#include <iostream>
#include <string>
using namespace std;
struct Book {
    int ID;
    string title;
    string author;
    float price;
};
int main () {
    Book book1= {1, "C++ PROGRAMMING", "DS Malik", 39.99};
    cout<<"Book ID: "<<book1.ID<<", title: "<<book1.title<<", Author: "<<book1.author<<" ,Price: "<<book1.price<<'\n';
}
