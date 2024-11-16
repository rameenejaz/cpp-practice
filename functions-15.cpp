#include <iostream>
using namespace std;
void displayName(){
cout << "********************************************" << endl;
cout << "*** PROGRAMMING FUNDAMENTALS-LAB ***" << endl;
cout << "*** LAB WEEK 8 ***" << endl;
cout << "*** FA24-BSE-160 ***" << endl;
cout << "*** RAMEEN MUZAMMIL EJAZ ***" << endl;
cout << "********************************************" << endl;
}
void displayChoices() {
    cout<<"Enter 'A' to convert Celsius to Fahrenheit"<<'\n';
    cout<<"Enter 'B' to convert Fahrenheit to Celsius"<<'\n';
    cout<<"Enter your choice: ";
}
double celsiusToFarenheit(double celsius) {
    double farenheit;
    farenheit=celsius*(9.0/5.0)+32;
    return farenheit;
}
double farenheitToCelsius(double farenheit){
    double celsius;
    celsius=(farenheit-32)*(5.0/9.0);
    return celsius;
}
double getInput(char input) {
    double temp;
    if (input=='A' || input=='a') {
        cout<<"You have chosen the conversion from Celsius to Fahrenheit"<<'\n';
        cout<<"Enter temperature in Celsius: ";
        cin>>temp;
    }
    else if (input=='B' || input=='b') {
        cout<<"You have chosen the conversion from Fahrenheit to Celsius"<<'\n';
        cout<<"Enter temperature in Fahrenheit: ";
        cin>>temp;
    } 
    else if (input!='A' || input!='B' || input!='a' || input!='b'){
        cout<<"Invalid choice! Choose either A or B:  ";
        cin>>input;
        }
        return temp;
    }
int main () {
    displayName();
    char choice;
    double Celsius;
    double Farenheit;
    char inputAgain;
    do{
    displayChoices();
    cin>>choice;
    if(choice=='A' || choice=='a') {
        Celsius=getInput(choice);  //imp
        double answer=celsiusToFarenheit(Celsius);
        cout<<"Temperature in Fahrenheit is:"<<answer<<"°F"<<'\n';
    }
    else if (choice=='B' || choice=='b') {
        Farenheit=getInput(choice); //imp
        double answer=farenheitToCelsius(Farenheit);
        cout<<"Temperature in Celsius is:"<<answer<<"°C"<<'\n';
    }
    else {
        cout<<"Enter either A or B"<<'\n';
        cin>>choice;
    }
    cout<<"Do you want to perform another conversion? Enter 'Y' to continue or 'N' to quit:";
    cin>>inputAgain;
    } while(inputAgain=='Y' || inputAgain=='y');
    cout<<"Program has been terminated!"<<'\n';
}
