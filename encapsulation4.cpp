#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;  // Private: Cannot be accessed directly

public:
    //constructor
    BankAccount (int initialBalance) {
        if (initialBalance<0) {
            balance=0;
        }
        else {
            balance=initialBalance;
        }
    }
    float getBalance () {
        return balance;
    }
};
int main() {
    BankAccount amount(1000);
    cout<<"Your balance is:"<<amount.getBalance()<<'\n';
    }
