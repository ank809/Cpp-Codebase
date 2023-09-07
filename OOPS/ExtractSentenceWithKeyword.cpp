#include <iostream>
#include <string>
#include <vector>

// Function to extract sentences containing a specific keyword
std::vector<std::string> extractSentencesWithKeyword(const std::string& paragraph, const std::string& keyword) {
    std::vector<std::string> result;
    size_t pos = 0;

    while (true) {
        // Find the next period '.' or exclamation mark '!' in the paragraph
        size_t end = paragraph.find_first_of(".!", pos);
        if (end == std::string::npos)
            break; // No more sentences found

        // Extract the current sentence
        std::string sentence = paragraph.substr(pos, end - pos + 1);

        // Check if the keyword exists in the current sentence
        if (sentence.find(keyword) != std::string::npos) {
            result.push_back(sentence);
        }

        // Move the starting position for the next search
        pos = end + 1;
    }

    return result;
}

int main() {
    std::string paragraph, keyword;

    // Input paragraph
    std::getline(std::cin, paragraph);

    // Input keyword
    std::cin >> keyword;

    // Extract sentences with the keyword
    std::vector<std::string> sentences = extractSentencesWithKeyword(paragraph, keyword);

    // Output the number of extracted sentences found
    std::cout << sentences.size() << std::endl;

    // Output the extracted sentences
    for (const std::string& sentence : sentences) {
        std::cout << sentence << " ";
    }

    return 0;
}

