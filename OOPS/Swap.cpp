#include <iostream>

template <class T1, class T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    // Constructor to initialize data members
    Pair(T1 a, T2 b) : first(a), second(b) {}

    // Function to swap values
    void swap() {
        T1 temp = first;
        first = second;
        second = temp;
    }

    // Function to display values before and after swap
    void display() {
        // Values before swap
        std::cout << "Values before swap: " << std::endl;
        std::cout << "First: " << first << std::endl;
        std::cout << "Second: " << second << std::endl;

        // Swap values
        swap();

        // Values after swap
        std::cout << "Values after swap: " << std::endl;
        std::cout << "First: " << first << std::endl;
        std::cout << "Second: " << second << std::endl;
    }
};

int main() {
    // Input float and double values
    float floatValue;
    double doubleValue;

    std::cout << "Enter a float value: ";
    std::cin >> floatValue;

    std::cout << "Enter a double value: ";
    std::cin >> doubleValue;

    // Create an instance of Pair with float and double values
    Pair<float, double> pair(floatValue, doubleValue);

    // Display values before and after swap
    pair.display();

    return 0;
}
