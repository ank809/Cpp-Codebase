#include <iostream>
#include <cstring>
using namespace std;

class Name {
public:
    char* name;

    Name(char *s) {
        int len = strlen(s);
        name = new char[len + 1];
        strcpy(name, s);
        cout << "Memory allocated";
    }

    void display() {
        cout << name;
    }

    ~Name() {
        delete[] name;
        cout << "Memory deallocated";
    }
};

int main() {
    Name n("Ankita Thakur ");
    cout << "Name is ";
    n.display();
    return 0;
}
