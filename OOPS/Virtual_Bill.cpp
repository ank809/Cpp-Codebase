#include <iostream>
#include <iomanip>

class currentBill {
public:
    currentBill(int power, int hours) : power(power), hours(hours) {}

    virtual double calculateElectricityConsumption() const {
        return (static_cast<double>(power) * hours) / 1000;
    }

    double calculateBill() const {
        return calculateElectricityConsumption() * 1.5; // $1.5 per kWh
    }

private:
    int power;  // Power rating in watts
    int hours;  // Total hours used
};

class Fan : public currentBill {
public:
    Fan(int power, int hours) : currentBill(power, hours) {}
};

class Light : public currentBill {
public:
    Light(int power, int hours) : currentBill(power, hours) {}
};

class TV : public currentBill {
public:
    TV(int power, int hours) : currentBill(power, hours) {}
};

int main() {
    int fanPower, fanHours, lightPower, lightHours, tvPower, tvHours;
    std::cin >> fanPower >> fanHours >> lightPower >> lightHours >> tvPower >> tvHours;

    Fan fan(fanPower, fanHours);
    Light light(lightPower, lightHours);
    TV tv(tvPower, tvHours);

    double totalBill = fan.calculateBill() + light.calculateBill() + tv.calculateBill();

    std::cout << std::fixed << std::setprecision(2) << totalBill << std::endl;

    return 0;
}
