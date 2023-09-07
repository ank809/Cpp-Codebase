#include <iostream>
#include <string>

class OnlineShop {
private:
    std::string shopName;
    std::string productNames[10];  // Assuming a maximum of 10 products
    float productPrices[10];      // Assuming a maximum of 10 products
    int catalogSize;

public:
    OnlineShop(const std::string& name, int catalogSize) : shopName(name), catalogSize(catalogSize) {
        // Initialize arrays
        for (int i = 0; i < catalogSize; ++i) {
            productNames[i] = "";
            productPrices[i] = 0.0;
        }
    }

    // Member function to add a product to the catalog
    void addProduct(const std::string& productName, float productPrice) {
        for (int i = 0; i < catalogSize; ++i) {
            if (productNames[i] == "") {
                productNames[i] = productName;
                productPrices[i] = productPrice;
                std::cout << "Product added: " << productName << std::endl;
                return;
            }
        }
        std::cout << "Catalog is full. Product not added." << std::endl;
    }

    // Member function to search for a product by name
    void searchProduct(const std::string& productName) {
        for (int i = 0; i < catalogSize; ++i) {
            if (productNames[i] == productName) {
                return;
            }
        }
        std::cout << "Product not found." << std::endl;
    }

    // Member function to display available products with their prices
    void displayProducts() {
        std::cout << "Available products:" << std::endl;
        for (int i = 0; i < catalogSize; ++i) {
            if (productNames[i] != "") {
                std::cout << productNames[i] << " " << productPrices[i] << std::endl;
            }
        }
    }
};

int main() {
    std::string shopName;
    int catalogSize;

    // Input shop name and catalog size
    std::getline(std::cin >> std::ws, shopName);
    std::cin >> catalogSize;

    OnlineShop shop(shopName, catalogSize);

    // Input product names and prices
    for (int i = 0; i < catalogSize; ++i) {
        std::string productName;
        float productPrice;

        std::getline(std::cin >> std::ws, productName);
        std::cin >> productPrice;

        shop.addProduct(productName, productPrice);
    }

    std::string searchProductName;
    std::cin >> searchProductName;

    // Search for a product by name
    shop.searchProduct(searchProductName);

    // Display available products
    shop.displayProducts();

    return 0;
}
