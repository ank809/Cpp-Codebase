#include <iostream>
#include <stdexcept>

const int MAX_ARRAY_SIZE = 1000;

int main() {
    int arraySize;

    // Prompt the user to enter the size of the array
    std::cout << "Enter the size of the array: ";
    std::cin >> arraySize;

    try {
        // Check if the array size is positive
        if (arraySize <= 0) {
            // If non-positive, throw std::invalid_argument
            throw std::invalid_argument("Error: Array size must be a positive integer.");
        }

        // Check if the array size exceeds the maximum limit
        if (arraySize > MAX_ARRAY_SIZE) {
            // If exceeds limit, throw std::length_error
            throw std::length_error("Error: Array size exceeds the maximum limit.");
        }

        // If all checks pass, display success message
        std::cout << "Array allocated successfully." << std::endl;
    } catch (const std::invalid_argument& e) {
        // Catch std::invalid_argument and display error message
        std::cout << "Invalid argument caught." << std::endl;
        std::cout << e.what() << std::endl;
    } catch (const std::length_error& e) {
        // Catch std::length_error and display error message
        std::cout << "Length error caught." << std::endl;
        std::cout << e.what() << std::endl;
    } catch (const std::exception& e) {
        // Catch other exceptions and display a generic error message
        std::cout << "Exception caught." << std::endl;
        std::cout << e.what() << std::endl;
    }

    return 0;
}
