#include <iostream>
#include <string>

// Hash function
int calculateHash(const std::string& text, int tSize) {
    int hashVal = 0;

    for (char ch : text) {
        hashVal = (37 * hashVal + int(ch));
    }

    return hashVal % tSize;
}

int main() {
    std::string text;
    int tSize;

    // Input the text and hash table size
    std::cin >> text >> tSize;

    // Calculate and print the hash index for the given text
    std::cout << calculateHash(text, tSize) << std::endl;

    return 0;
}
