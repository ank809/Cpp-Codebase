#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int reg_no;

public:
    void insert()
    {
        cin >> name;
        cin >> reg_no;
    }

    void display()
    {
        cout << name << " " << reg_no << endl;
    }
};

int main()
{
    int n;
    cout << "Enter the maximum number of students: ";
    cin >> n;

    Student *stud[n]; // Allocate an array of Student objects

    for (int i = 0; i < n; i++)
    {
        int choice;
        cout << "Enter your choice :\n"
             << "1 - Create\n"
             << "2 - Delete \n"
             << "3 - Insert \n"
             << "4 - Display \n"
             << "5 - Terminate " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            stud[i] = new Student;
            cout << "Student" << i + 1 << "created" << endl;
            break;
        case 2:
            cout << "Student" << i + 1 << "deleted" << endl;
            delete stud[i];
            break;
        case 3:
            cout << "Insert values of student" << i + 1 << endl;
            stud[i]->insert();
        case 4:
            stud[i]->display();
        case 5:
            cout << "Program terminated" << endl;
            break;
            return 0;
        }
    }

    return 0;
}
