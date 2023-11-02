#include <iostream>
#include <cmath>

class NeonNumber {
protected:
    int number;

public:
    NeonNumber(int n) : number(n) {}
    
    virtual ~NeonNumber() {
        // Virtual destructor for proper memory management
    }
    
    virtual bool isNeonNumber() {
        int square = number * number;
        int sumOfDigits = 0;
        while (square > 0) {
            sumOfDigits += square % 10;
            square /= 10;
        }
        return sumOfDigits == number;
    }
};

class CheckNeonNumber : public NeonNumber {
public:
    CheckNeonNumber(int n) : NeonNumber(n) {}

    bool isNeonNumber() override {
        return NeonNumber::isNeonNumber();
    }
};

int main() {
    int n;
    std::cin >> n;

    if (n >= 1 && n < 20) {
        CheckNeonNumber neon(n);

        if (neon.isNeonNumber()) {
            std::cout << n << " it's a Neon Number." << std::endl;
        } else {
            std::cout << n << " it's Not a Neon Number." << std::endl;
        }
    } else {
        std::cout << "Enter a valid number" << std::endl;
    }

    return 0;
}
