#include <iostream>
using namespace std;
int main () {
  int number=0; //user inputs this number
  int maxNum=0; //the maximum number will be stored here
  char choice;  //used for the Y and N to ask if he wishes to carry out task again
  int updatedVal=0; //the current value is usually stored here
  do {
    do {
    cout<<"Enter a positive integer (greater than 6): ";
    cin>>number; 
    if (number<=6) {
        cout<<"Invalid number. Enter a positive integer (greater than 6): ";
    }
    } while (number<=6); 
    int updatedVal=number;
    maxNum=updatedVal;
    cout<<"The sequence is: "<<updatedVal;
    while (updatedVal!=1 && updatedVal!=0) { //if current value is not equal to 1 or 0 carry the following steps in the loop
        if (updatedVal%2==0) { //checks if the updated value is even
            updatedVal/=4;   //carries out the needed calculations for even number
        }
        else {
            updatedVal=(7*updatedVal)+3;   //this is for odd inputs
        }
        cout<<","<<updatedVal;
        if (updatedVal>maxNum) {  //if the recently entered value is greater than the value before it
            maxNum=updatedVal;    //the maximum value is stored in the maxNum variable
        }
    } 
    cout<<'\n';
        cout<<"The maximum value is: "<<maxNum<<'\n';
        cout<<"Do you want to generate another sequence (Y for generate new sequence and N to exit): ";
        cin>>choice;
  }while (choice=='Y' || choice=='y');  //when y is entered (yes) loop is terminated

  if (choice=='N' || choice=='n') {
    cout<<"loop has been terminated :)"; 
  }

}