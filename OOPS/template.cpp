#include <iostream>

template <class T>
class BankAccount {
private:
    T balance;
    T interestRate;

public:
    // Constructor
    BankAccount() : balance(0), interestRate(0) {}

    // Set the initial balance of the account
    void setBalance(T b) {
        balance = b;
    }

    // Set the interest rate for the account
    void setInterestRate(T r) {
        interestRate = r;
    }

    // Get the current balance of the account
    T getBalance() const {
        return balance;
    }

    // Get the interest rate of the account
    T getInterestRate() const {
        return interestRate;
    }

    // Calculate the interest earned by the account after one year
    T calculateInterest() const {
        return balance * interestRate / 100;
    }
};

int main() {
    // Create an instance of BankAccount with double data type
    BankAccount<double> savingsAccount;

    // Input initial balance and interest rate
    double initialBalance, interestRate;
    std::cout << "Enter initial balance: ";
    std::cin >> initialBalance;
    savingsAccount.setBalance(initialBalance);

    std::cout << "Enter interest rate: ";
    std::cin >> interestRate;
    savingsAccount.setInterestRate(interestRate);

    // Calculate interest and display results
    double interestEarned = savingsAccount.calculateInterest();
    double updatedBalance = initialBalance + interestEarned;

    std::cout << "Balance after one year: " << updatedBalance << std::endl;
    std::cout << "Interest earned after one year: " << interestEarned << std::endl;

    return 0;
}
