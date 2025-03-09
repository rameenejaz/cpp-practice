#include <iostream>
using namespace std;
#include <cmath>
class polynomial {
    private:
    int terms;
    int coeffiecent[10];
    char variable[10];
    int exponent[10];
    public:
    polynomial () {
        terms=0;
    }
    void setTerm(int coeff, char var, int exp) {
        coeffiecent[terms]=coeff;
        variable[terms]=var;
        exponent[terms]=exp;
        terms++;
    }
    void inputPolynomial () {
        cout<<"Enter the number of terms in the polynomial: ";
        cin>>terms;
        for (int i=0; i<terms; i++) {
            cout<<"Enter coeffiecent:";
            cin>>coeffiecent[i];
            cout<<"Enter variable:";
            cin>>variable[i];
            cout<<"Enter exponent:";
            cin>>exponent[i];
        }
        cout<<'\n';
    }
    void displayTerms() {
        for (int i=0; i<terms; i++) {
            if(i>0) {
                if(coeffiecent[i]>0) {
                    cout<<"+";
                }
                else if (coeffiecent[i]<0) {
                    cout<<"-";
                }
            }
            cout<<abs(coeffiecent[i])<<variable[i]<<"^"<<exponent[i];
        }
        cout<<'\n';
    }
    polynomial add (polynomial other) {
        polynomial result;
        bool used[10]={false};
        for (int i=0; i<terms; i++) {
            bool found=false;
            for (int j=0; j<other.terms; j++) {
                if (variable[i]==other.variable[j] && exponent[i]==other.exponent[j]) {
                    result.setTerm((coeffiecent[i]+other.coeffiecent[j]), variable[i], exponent[i]);
                    used[j]=true;
                    found=true;
                    break;
                }
            }
            if (!found) {
                result.setTerm(coeffiecent[i], variable[i], exponent[i]);
            }
        }
        for (int j=0; j<other.terms; j++) {
            if(!used[j]) {
                result.setTerm(other.coeffiecent[j], other.variable[j], other.exponent[j]);
            }
        }
        return result;
    }
};
void displayMenu() {
    cout<<'\n';
    cout<<"1. Enter first polynomial."<<'\n';
    cout<<"2. Enter second polynomial."<<'\n';
    cout<<"3. View first polynomial."<<'\n';
    cout<<"4. View second polynomial."<<'\n';
    cout<<"5. Add the polynomials"<<'\n';
    cout<<"0. To exit"<<'\n';
    cout<<'\n';
}
int main (){
    polynomial poly1;
    polynomial poly2;
    polynomial sum;
    int option=-99;
    while(option!=0) {
        displayMenu();
        cout<<"Choose one of the following options (1-5 or 0 to exit):";
        cin>>option;
        switch(option) {
            case 1:
            poly1.inputPolynomial();
            cout<<"Polynomial 1 added!"<<'\n';
            break;
            case 2:
            poly2.inputPolynomial();
            cout<<"Polynomial 2 added!"<<'\n';
            break;
            case 3:
            cout<<"Polynomial 1: ";
            poly1.displayTerms();
            cout<<'\n';
            break;
            case 4:
            cout<<"Polynomial 2: ";
            poly2.displayTerms();
            cout<<'\n';
            break;
            case 5:
            sum=poly1.add(poly2);
            cout<<"Sum of polynomials:";
            sum.displayTerms();
            cout<<'\n';
            break;
            case 0:
            return 1;
        }
    }
}