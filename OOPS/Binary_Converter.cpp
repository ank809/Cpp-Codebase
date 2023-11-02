#include <iostream>
#include <bitset>

class BinaryConverter {
public:
    static std::string intToBinary(int number) {
        return std::bitset<32>(number).to_string();
    }
};

int main() {
    int number;
    std::cin >> number;

    std::string binaryRepresentation = BinaryConverter::intToBinary(number);

    std::cout << "Binary representation: " << binaryRepresentation << std::endl;

    return 0;
}
