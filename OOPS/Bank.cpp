#include <iostream>
#include <string>

class BankATM {
private:
    int atmID;
    std::string location;
    float availableCash;

public:
    // Constructor to initialize ATM attributes
    BankATM(int id, std::string loc, float cash) {
        atmID = id;
        location = loc;
        availableCash = cash;
    }

    // Member function to withdraw cash
    void withdraw(float amount) {
        if (amount <= availableCash) {
            availableCash -= amount;
            std::cout << "Withdrawal successful. Available cash: " << availableCash << std::endl;
        } else {
            std::cout << "Insufficient cash in the ATM." << std::endl;
        }
    }

    // Member function to deposit cash
    void deposit(float amount) {
        availableCash += amount;
        std::cout << "Deposit successful. Available cash: " << availableCash << std::endl;
    }

    // Member function to display available cash
    void displayAvailableCash() {
        std::cout << "Available cash in ATM: " << availableCash << std::endl;
    }
};

int main() {
    int atmID;
    std::string location;
    float availableCash, withdrawAmount, depositAmount;

    // Input
    std::cin >> atmID;
    std::cin.ignore(); // Ignore newline character
    std::getline(std::cin, location);
    std::cin >> availableCash;
    std::cin >> withdrawAmount;
    std::cin >> depositAmount;

    // Create BankATM object
    BankATM atm(atmID, location, availableCash);

    // Perform withdrawal and deposit operations
    atm.withdraw(withdrawAmount);
    atm.deposit(depositAmount);
    atm.displayAvailableCash();

    return 0;
}
