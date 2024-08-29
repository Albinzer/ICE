11. Write a program that uses a constructor to initialize data members of a class representing a
simple banking account.(Show owner names, primary balance, withdraws and updated account information). ( By C++ or Java )


class BankAccount {
    private String ownerName;
    private double balance;

    public BankAccount(String name, double initialBalance) {
        ownerName = name;
        balance = initialBalance;
    }

    public void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            System.out.println("Withdrawn: $" + amount);
        } else {
            System.out.println("Insufficient funds.");
        }
    }

    public void displayAccountInfo() {
        System.out.println("Account Owner: " + ownerName);
        System.out.println("Current Balance: $" + balance);
    }
}

public class Main {
    public static void main(String[] args) {
        BankAccount account = new BankAccount("John Doe", 1000.0);
        
        account.displayAccountInfo();
        
        account.withdraw(200.0);
        account.displayAccountInfo();
        
        account.withdraw(900.0);
        account.displayAccountInfo();
    }
}
