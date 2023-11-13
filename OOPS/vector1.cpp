#include <iostream>
#include <vector>
#include <algorithm>

// Function to remove all occurrences of a given element from a vector
void removeElement(std::vector<int>& patients, int targetID) {
    patients.erase(std::remove(patients.begin(), patients.end(), targetID), patients.end());
}

int main() {
    // Input the number of patients
    int N;
    std::cin >> N;

    // Input the patient IDs
    std::vector<int> patients(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> patients[i];
    }

    // Input the ID for which the appointment has to be canceled
    int M;
    std::cin >> M;

    // Call the removeElement function to remove occurrences of M
    removeElement(patients, M);

    // Output the modified patient IDs
    for (int i = 0; i < patients.size(); ++i) {
        std::cout << patients[i] << " ";
    }

    return 0;
}
