#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

// Function to generate a random character from a given character set
char getRandomCharacter(const std::string& charSet) {
    int index = rand() % charSet.length();
    return charSet[index];
}

int main() {
    srand(static_cast<unsigned>(time(0)));  // Seed the random number generator

    std::string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string numbers = "0123456789";
    std::string specialChars = "!@#$%^&*()_+-=[]{}|;:',.<>?";

    std::string generatedNumber = "";

    std::string includeAlphabets;
    std::string includeNumbers;
    std::string includeSpecialChars;

    // Ask user for preferences
    std::cout << "Do you want to include alphabets? (yes/no): ";
    std::cin >> includeAlphabets;

    std::cout << "Do you want to include numbers? (yes/no): ";
    std::cin >> includeNumbers;

    std::cout << "Do you want to include special characters? (yes/no): ";
    std::cin >> includeSpecialChars;

    if (includeAlphabets == "yes") {
        generatedNumber += getRandomCharacter(alphabet);
    }

    if (includeNumbers == "yes") {
        generatedNumber += getRandomCharacter(numbers);
    }

    if (includeSpecialChars == "yes") {
        generatedNumber += getRandomCharacter(specialChars);
    }

    // Generate the rest of the random characters
    while (generatedNumber.length() < 15) {  // You can change the length as needed
        // Choose from alphabets, numbers, or special characters based on user preferences
        std::string charSet = "";
        if (includeAlphabets == "yes") {
            charSet += alphabet;
        }
        if (includeNumbers == "yes") {
            charSet += numbers;
        }
        if (includeSpecialChars == "yes") {
            charSet += specialChars;
        }

        if (charSet.empty()) {
            std::cout << "Please select at least one character set." << std::endl;
            return 1;
        }

        generatedNumber += getRandomCharacter(charSet);
    }

    // Shuffle the generatedNumber
    for (int i = generatedNumber.length() - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        std::swap(generatedNumber[i], generatedNumber[j]);
    }

    std::cout << "Generated random number: " << generatedNumber << std::endl;

    return 0;
}
