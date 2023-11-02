#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the size of the array
    cin >> n;

    if (n <= 0) {
        cout << "Number of integers should be greater than 0." << endl;
        return 0;
    }

    // Dynamically allocate memory for the integer array
    int* arr = new int[n];

    // Dynamically allocate memory for arrays to store even and odd numbers
    int* evenArr = new int[n];
    int* oddArr = new int[n];

    int evenCount = 0;
    int oddCount = 0;

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            evenArr[evenCount] = arr[i];
            evenCount++;
        } else {
            oddArr[oddCount] = arr[i];
            oddCount++;
        }
    }

    // Output even numbers
    cout << "List of Even Integers: ";
    for (int i = 0; i < evenCount; i++) {
        cout << evenArr[i] << " ";
    }
    cout << endl;

    // Output odd numbers
    cout << "List of Odd Integers: ";
    for (int i = 0; i < oddCount; i++) {
        cout << oddArr[i] << " ";
    }
    cout << endl;

    // Deallocate memory
    delete[] arr;
    delete[] evenArr;
    delete[] oddArr;

    return 0;
}
