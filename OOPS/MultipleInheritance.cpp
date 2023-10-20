#include <iostream>
using namespace std;

class A {
protected:
    int m;
public:
    void getM(int a) {
        m = a;
    }
};

class B {
protected:
    int n;
public:
    void getN(int b) {
        n = b;
    }
};

class P : public A, public B {
public:
    void setValues(int a, int b) {
        A::getM(a);
        B::getN(b);
    }

    void display() {
        cout << "m= " << m << endl;
        cout << "n= " << n << endl;
    }
};

int main() {
    P p;
    p.setValues(3, 4);
    p.display();
    return 0;
}
