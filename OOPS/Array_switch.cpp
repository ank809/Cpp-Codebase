#include <iostream>
using namespace std;

class Array {
public:
    int n;
    int* arr;

    Array(int len) {
        n = len;
        arr = new int[n];
    }

    void insert() {
        for (int i = 0; i < n; i++) {
            cout << "Enter element at index " << i + 1 << ": ";
            cin >> arr[i];
        }
    }

    void display() {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    }

    void insertElementAtIndex(int index, int element) {
        for (int i = n - 1; i >= index; i--) {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
        n++;
    }

    void deleteAtIndex(int index) {
        for (int i = index; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    }
};

int main() {
    int n;
    cin >> n;
    Array arr(n);
    int choice;

    arr.insert();

    cout << "Enter 1 for insert element" << endl;
    cout << "Enter 2 for delete" << endl;
    cout << "Enter 3 for exit" << endl;
    cin >> choice;

    switch (choice) {
        case 1:
            int index, element;
            cout << "Enter index to insert: ";
            cin >> index;
            cout << "Enter element to insert: ";
            cin >> element;
            arr.insertElementAtIndex(index, element);
            break;

        case 2:
            cout << "Enter index to delete: ";
            cin >> index;
            arr.deleteAtIndex(index);
            break;

        case 3:
            break;
    }

    arr.display();
}
