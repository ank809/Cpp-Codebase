#include <iostream>

using namespace std;

class Employee {
private:
    static int count;
    int salary;

public:
    Employee() {
        count++;
    }

    void setSalary(int s) {
        salary = s;
    }

    int getSalary() {
        return salary;
    }

    static int getCount() {
        return count;
    }
};

int Employee::count = 0;

int main() {
    int n;
    cin >> n;
    Employee *emp = new Employee[n];
    
    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        emp[i].setSalary(s);
    }
    
    cout << "Total number of employees: " << Employee::getCount() << endl;
    
    for (int i = 0; i < n; i++) {
        cout << emp[i].getSalary() << endl;
    }

    // Clean up the dynamically allocated memory
    delete[] emp;

    return 0;
}
