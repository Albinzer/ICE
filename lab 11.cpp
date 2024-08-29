11. Write a program that uses a constructor to initialize data members of a class representing a
simple banking account.(Show owner names, primary balance, withdraws and updated account information). ( By C++ or Java )


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
