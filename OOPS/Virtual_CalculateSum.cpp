#include <iostream>
#include <iomanip>

class ItemType {
public:
    virtual double calculateAmount() {
        return 0.0;
    }
};

class Wooden : public ItemType {
private:
    int numberOfItems;
    double cost;

public:
    Wooden(int n, double c) : numberOfItems(n), cost(c) {}

    double calculateAmount() override {
        return static_cast<double>(numberOfItems) * cost;
    }
};

class Electronics : public ItemType {
private:
    double cost;

public:
    Electronics(double c) : cost(c) {}

    double calculateAmount() override {
        return 0.8 * cost; // Apply a 20% discount
    }
};

int main() {
    int choice;
    std::cin >> choice;

    if (choice == 1) {
        int numItems;
        double itemCost;
        std::cin >> numItems >> itemCost;

        Wooden woodenItem(numItems, itemCost);
        double amount = woodenItem.calculateAmount();

        std::cout << std::fixed << std::setprecision(2) << amount << std::endl;
    } else if (choice == 2) {
        double itemCost;
        std::cin >> itemCost;

        Electronics electronicsItem(itemCost);
        double amount = electronicsItem.calculateAmount();

        std::cout << std::fixed << std::setprecision(2) << amount << std::endl;
    } else {
        std::cout << "Invalid choice." << std::endl;
    }

    return 0;
}
