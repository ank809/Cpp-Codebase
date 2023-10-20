#include <iostream>
using namespace std;

class A {
public:
    void area() {
        cout << "Area of rectangle of l*b"<<endl;
    }
};

class B : public A {

};

class C : public A {

};

class D : public B, public C {

};

int main() {
    D d;
    d.B::area(); // Call the area function from class B
    d.C::area(); // Call the area function from class C
    return 0;
}
