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
    void deposit (int depositAmount) {
        balance+=depositAmount;
    }
};
int main() {
    BankAccount amount(1000);
    cout<<"Your balance is:"<<amount.getBalance()<<'\n';
    amount.deposit(500);
    cout<<"Your updated balace is:"<<amount.getBalance()<<'\n';
}
