#include <iostream>
using namespace std;
struct Student {
    int ID;
    string name;
    float grade;
};
int main() {
Student students[3]={
    {100,"alice",55},
    {101,"peter",67},
    {102,"bob",209}
};
for (int i=0; i<3; i++) {
    cout<<students[i].name<<" with "<<students[i].ID<<" has the grade "<<students[i].grade<<'\n';
}

}