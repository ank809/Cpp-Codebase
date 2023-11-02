#include <iostream>
#include <string>

class TextSearch {
private:
    std::string mainText;

public:
    TextSearch(const std::string& text) : mainText(text) {}

    bool operator/(const std::string& subText) {
        size_t found = mainText.find(subText);
        return (found != std::string::npos);
    }
};

int main() {
    std::string mainText, subText;
    std::getline(std::cin, mainText);
    std::getline(std::cin, subText);

    TextSearch text(mainText);

    if (text / subText) {
        std::cout << "Substring is present" << std::endl;
    } else {
        std::cout << "substring is not present"
    }
}   