#include <iostream>

int main() {
    // Read the exchange rate and amount in USD from input
    double* exchangeRate = new double; // Allocate memory for the exchange rate
    double* amountUSD = new double;    // Allocate memory for the amount in USD

    std::cin >> *exchangeRate;
    std::cin >> *amountUSD;

    // Calculate the converted amount
    double convertedAmount = *exchangeRate * (*amountUSD);

    // Display the converted amount with 2 decimal places
    std::cout << std::fixed; // Set the output format to fixed-point
    std::cout.precision(2);  // Set precision to 2 decimal places
    std::cout << convertedAmount << std::endl;

    // Deallocate the memory to prevent memory leaks
    delete exchangeRate;
    delete amountUSD;

    return 0;
}
