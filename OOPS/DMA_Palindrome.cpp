#include <iostream>
#include <cstring>

// Function to check if a string is a palindrome
bool isPalindrome(const char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

// Function to reverse a string
char* reverseString(const char* str) {
    int len = strlen(str);
    char* reversed = new char[len + 1]; // Allocate memory for the reversed string

    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - 1 - i];
    }
    reversed[len] = '\0'; // Null-terminate the reversed string

    return reversed;
}

int main() {
    const int maxStringLength = 100;
    char inputString[maxStringLength];
    
    std::cin.getline(inputString, maxStringLength);

    if (isPalindrome(inputString)) {
        std::cout << "The input string is a palindrome." << std::endl;
    } else {
        std::cout << "The input string is not a palindrome." << std::endl;
    }

    char* reversed = reverseString(inputString);
    std::cout << "Reversed string: " << reversed << std::endl;

    // Deallocate the memory to prevent memory leaks
    delete[] reversed;

    return 0;
}
