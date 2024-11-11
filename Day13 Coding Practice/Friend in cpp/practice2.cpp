// friend function ( example 2 ) 

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    // Friend function that can directly modify the balance
    friend void deposit(BankAccount& account, double amount);
    
    void display() {
        cout << "Current Balance: $" << balance << endl;
    }
};

// Friend function to deposit money into the account
void deposit(BankAccount& account, double amount) {
    if(amount > 0) {
        account.balance += amount;
    }
}

int main() {
    BankAccount account(100.0);
    account.display();
    
    deposit(account, 50.0);  // Directly accessing and modifying private balance
    account.display();

    return 0;
}
