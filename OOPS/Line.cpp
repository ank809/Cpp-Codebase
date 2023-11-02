#include <iostream>

class Point {
protected:
    int x, y;

public:
    Point(int x, int y) : x(x), y(y) {}

    void setX(int x) {
        this->x = x;
    }

    void setY(int y) {
        this->y = y;
    }

    virtual void display() const = 0;
};

class Line : public Point {
private:
    int x2, y2;

public:
    Line(int x1, int y1, int x2, int y2) : Point(x1, y1), x2(x2), y2(y2) {}

    void setX2(int x2) {
        this->x2 = x2;
    }

    void setY2(int y2) {
        this->y2 = y2;
    }

    void display() const override {
        std::cout << "The line is:" << std::endl;
        std::cout << "Start point: (" << x << "," << y << ")" << std::endl;
        std::cout << "End point: (" << x2 << "," << y2 << ")" << std::endl;
    }
};

int main() {
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    Line line(x1, y1, x2, y2);
    line.display();

    return 0;
}
