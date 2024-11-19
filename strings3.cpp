#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
int main () {

    char *myArray[5]={"chair","table","fan","cupboard","frame"};
    //string *myPtrArray[5];
    for (int i=0; myArray[i]!='\0'; i++) {
        cout<<myArray[i]<<'\n';
    }

//     for (i=0; i<5; i++) {
//         myPtrArray[i]=&myArray[i];
//     }
//    cout<<'\n';
//    for (i=0; i<5; i++) {
//     cout<<myPtrArray[i]<<'\n';
//    }
}
