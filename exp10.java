// Abstract class
abstract class BankAccount {
    private int accountNumber;
    private String accountHolderName;
    private double balance;

    // Constructor
    BankAccount(int accountNumber, String accountHolderName, double balance) {
        this.accountNumber = accountNumber;
        this.accountHolderName = accountHolderName;
        this.balance = balance;
    }

    // Getters
    public int getAccountNumber() {
        return accountNumber;
    }

    public String getAccountHolderName() {
        return accountHolderName;
    }

    public double getBalance() {
        return balance;
    }

    // Setter
    public void setBalance(double balance) {
        this.balance = balance;
    }

    // Deposit method
    public void deposit(double amount) {
        balance += amount;
    }

    // Display details
    public void displayDetails() {
        System.out.println("Account Number: " + accountNumber);
        System.out.println("Account Holder: " + accountHolderName);
        System.out.println("Balance: " + balance);
    }

    // Abstract method
    abstract void calculateInterest();
}

// SavingsAccount class
class SavingsAccount extends BankAccount {

    SavingsAccount(int accountNumber, String accountHolderName, double balance) {
        super(accountNumber, accountHolderName, balance);
    }

    @Override
    void calculateInterest() {
        double interest = getBalance() * 0.04;
        System.out.println("Savings Account Interest: " + interest);
    }
}

// CurrentAccount class
class CurrentAccount extends BankAccount {

    CurrentAccount(int accountNumber, String accountHolderName, double balance) {
        super(accountNumber, accountHolderName, balance);
    }

    @Override
    void calculateInterest() {
        double interest = getBalance() * 0.02;
        System.out.println("Current Account Interest: " + interest);
    }
}

// Main class
public class exp10 {
    public static void main(String[] args) {

        SavingsAccount s = new SavingsAccount(101, "Rahul", 10000);
        CurrentAccount c = new CurrentAccount(102, "Amit", 15000);

        // Deposit money
        s.deposit(2000);
        c.deposit(3000);

        System.out.println("Savings Account");
        s.displayDetails();
        s.calculateInterest();

        System.out.println();

        System.out.println("Current Account");
        c.displayDetails();
        c.calculateInterest();
    }
}