#include <iostream>
#include <string>

int main() {
    std::string firstString, secondString;

    // Input two strings from the user
    std::getline(std::cin, firstString);
    std::getline(std::cin, secondString);

    // Display the strings before swapping
    std::cout << "The first string before swapping is : " << firstString << std::endl;
    std::cout << "The second string before swapping is : " << secondString << std::endl;

    // Swap the strings
    std::swap(firstString, secondString);

    // Display the strings after swapping
    std::cout << "The first string after swapping is: " << firstString << std::endl;
    std::cout << "The second string after swapping is: " << secondString << std::endl;

    return 0;
}
