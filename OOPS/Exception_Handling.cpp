#include <iostream>

int main() {
    int age;

    // Prompt the user to enter their age
    std::cout << "Enter your age: ";
    std::cin >> age;

    try {
        // Check if the age is 18 or older
        if (age >= 18) {
            std::cout << "YES, you are old enough." << std::endl;
        } else {
            // If the age is below 18, throw an exception
            throw age;
        }
    } catch (int ageException) {
        // Handle the exception and display an error message
        std::cout << "No, You must be at least 18 years old" << std::endl;
        std::cout << "Current Age is : " << ageException << std::endl;
    }

    return 0;
}
