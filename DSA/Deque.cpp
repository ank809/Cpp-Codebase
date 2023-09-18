#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> myDeque;
    int element;

    // Read and insert elements at the front
    cin >> element;
    myDeque.push_front(element);
    cin >> element;
    myDeque.push_front(element);

    // Read and insert elements at the back
    cin >> element;
    myDeque.push_back(element);
    cin >> element;
    myDeque.push_back(element);

    // Read and insert elements at the front and back
    cin >> element;
    myDeque.push_front(element);
    cin >> element;
    myDeque.push_back(element);

    // Print the elements of the deque
    for (int num : myDeque) {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}
