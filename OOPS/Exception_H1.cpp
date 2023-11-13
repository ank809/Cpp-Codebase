#include <iostream>
#include <stdexcept>

class NegativeRadiusException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Error: Radius cannot be negative or zero.";
    }
};

class Circle {
private:
    double radius;

public:
    Circle() : radius(0.0) {}

    void setRadius(double r) {
        if (r <= 0) {
            // Throw NegativeRadiusException for negative or zero radius
            throw NegativeRadiusException();
        }
        radius = r;
        std::cout << "Radius set successfully: " << radius << std::endl;
    }

    double getRadius() const {
        return radius;
    }
};

int main() {
    Circle circle;
    double inputRadius;

    // Prompt the user to enter the radius of the circle
    std::cout << "Enter the radius of the circle: ";
    std::cin >> inputRadius;

    try {
        // Try to set the radius in the Circle class
        circle.setRadius(inputRadius);
    } catch (const NegativeRadiusException& e) {
        // Catch NegativeRadiusException and display the error message
        std::cout << "Exception caught." << std::endl;
        std::cout << e.what() << std::endl;
    }

    return 0;
}
