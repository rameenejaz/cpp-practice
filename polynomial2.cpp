#include <iostream>
using namespace std;

class Polynomial {
private:
    int terms;                 // Number of terms in the polynomial
    int coefficients[10];       // Array to store coefficients
    int exponents[10];          // Array to store exponents

public:
    // Constructor to initialize polynomial
    Polynomial() {
        terms = 0;  // No terms initially
    }

    // Function to set a term
    void setTerm(int coeff, int exp) {
        coefficients[terms] = coeff;
        exponents[terms] = exp;
        terms++;
    }

    // Function to display the polynomial
    void display() {
        for (int i = 0; i < terms; i++) {
            cout << coefficients[i] << "x^" << exponents[i];
            if (i < terms - 1) cout << " + ";
        }
        cout << endl;
    }

    // Function to add two polynomials
    Polynomial add(Polynomial& other) {
        Polynomial result;
        int i = 0, j = 0;

        // Merge terms with the same exponent
        while (i < terms && j < other.terms) {
            if (exponents[i] == other.exponents[j]) {
                result.setTerm(coefficients[i] + other.coefficients[j], exponents[i]);
                i++;
                j++;
            } else if (exponents[i] > other.exponents[j]) {
                result.setTerm(coefficients[i], exponents[i]);
                i++;
            } else {
                result.setTerm(other.coefficients[j], other.exponents[j]);
                j++;
            }
        }

        // Copy remaining terms from first polynomial
        while (i < terms) {
            result.setTerm(coefficients[i], exponents[i]);
            i++;
        }

        // Copy remaining terms from second polynomial
        while (j < other.terms) {
            result.setTerm(other.coefficients[j], other.exponents[j]);
            j++;
        }

        return result;
    }
};

int main() {
    Polynomial p1, p2, sum;

    // First polynomial: 5x^2 + 4x + 3
    p1.setTerm(5, 2);
    p1.setTerm(4, 1);
    p1.setTerm(3, 0);

    // Second polynomial: 2x^2 + 3x + 1
    p2.setTerm(2, 2);
    p2.setTerm(3, 1);
    p2.setTerm(1, 0);

    cout << "Polynomial 1: ";
    p1.display();

    cout << "Polynomial 2: ";
    p2.display();

    // Add the two polynomials
    sum = p1.add(p2);

    cout << "Sum: ";
    sum.display();

    return 0;
}
