#include <iostream>
using namespace std;

class SavingsAccount {
private:
    double savingsBalance;                    // Instance variable to store balance
    static double annualInterestRate;         // Static variable to store interest rate

public:
    // Constructor to initialize balance
    SavingsAccount(double balance) : savingsBalance(balance) {}

    // Method to calculate and add monthly interest to the balance
    void calculateMonthlyInterest() {
        double monthlyInterest = savingsBalance * annualInterestRate / 12;
        savingsBalance += monthlyInterest;
    }

    // Static method to modify the interest rate
    static void modifyInterestRate(double newRate) {
        annualInterestRate = newRate;
    }

    // Method to get the current balance
    double getBalance() const {
        return savingsBalance;
    }
};

// Definition and initialization of static member
double SavingsAccount::annualInterestRate = 0.0;

int main() {
    // Create two SavingsAccount objects
    SavingsAccount saver1(2000.0);
    SavingsAccount saver2(3000.0);

    // Set interest rate to 4%
    SavingsAccount::modifyInterestRate(0.04);

    // Calculate monthly interest for both savers
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    // Display balances after first interest calculation
    cout << "Saver 1 balance: " << saver1.getBalance() << endl;
    cout << "Saver 2 balance: " << saver2.getBalance() << endl;

    // Set interest rate to 5%
    SavingsAccount::modifyInterestRate(0.05);

    // Calculate monthly interest for both savers again
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    // Display balances after second interest calculation
    cout << "Saver 1 balance: " << saver1.getBalance() << endl;
    cout << "Saver 2 balance: " << saver2.getBalance() << endl;

    return 0;
}