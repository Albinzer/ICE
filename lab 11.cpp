#include <iostream>
using namespace std;

class BankAccount {
private:
    string ownerName;
    double balance;

public:
    BankAccount(string name, double initialBalance) {
        ownerName = name;
        balance = initialBalance;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Insufficient funds." << endl;
        }
    }

    void displayAccountInfo() {
        cout << "Account Owner: " << ownerName << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account("John Doe", 1000.0);
    
    account.displayAccountInfo();
    
    account.withdraw(200.0);
    account.displayAccountInfo();
    
    account.withdraw(900.0);
    account.displayAccountInfo();

    return 0;
}
