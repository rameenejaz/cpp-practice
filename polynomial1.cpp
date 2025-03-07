#include <iostream>
using namespace std;
#include <cmath>
class polynomial {
    private:
    int coeffiecent=0;
    char variable;
    int exponent=0;
    public:
    void setCoeffiecent (int inputCoeffiecent) {
        coeffiecent=inputCoeffiecent;
    }
    int getCoeffiecent () {
        return coeffiecent;
    }
    void setVariable (char inputVariable) {
        variable=inputVariable;
    }
    char getVariable () {
        return variable;
    }
    void setExponent (int inputExponent) {
        exponent=inputExponent;
    }
    int getExponent () {
        return exponent;
    }
    polynomial {
        coeffiecent=0;
        variable=0;
        exponent=0;
    }
};
void showMenu () {
    cout<<"Press 1 to set coeffiecent"<<'\n';
    cout<<"Press 2 to set the variable"<<'\n';
    cout<<"Press 3 to set the exponent"<<'\n';
    cout<<"Press 4 to view your polynomial"<<'\n';
    cout<<"Press 5 to compute for another polynomial"<<'\n';
    cout<<"Press 6 to add these polynomials"<<'\n';
    cout<<"Press 0 to exit"<<'\n';
}
int main () {
    polynomial function;
    int inputCoeffiecent=0;
    char inputVariable;
    int inputExponent=0;
    int option;
    while(option!=0) {
        showMenu();
        cout<<"Choose your option (1-6 or 0 to exit):";
        cin>>option;
            switch(option) {
            case 1:
            cout<<"Enter the coeffiecent value:";
            cin>>inputCoeffiecent;
            function.setCoeffiecent(inputCoeffiecent);
            break;
            case 2:
            cout<<"Enter the variable for this polynomial:";
            cin>>inputVariable;
            function.setVariable(inputVariable);
            break;
            case 3:
            cout<<"Enter the exponent value:";
            cin>>inputExponent;
            function.setExponent(inputExponent);
            break;
            case 4:
            cout<<function.getCoeffiecent()<<pow(function.getVariable(), function.getExponent())<<'\n';
            break;
            case 5:
            cout<<"Enter the coeffiecent value:";
            cin>>inputCoeffiecent;
            function.setCoeffiecent(inputCoeffiecent);
            cout<<"Enter the variable for this polynomial:";
            cin>>inputVariable;
            function.setVariable(inputVariable);
            cout<<"Enter the exponent value:";
            cin>>inputExponent;
            function.setExponent(inputExponent);
            break;
            case 6:

            break;
            case 0:
            return 1;
        }
    }
}