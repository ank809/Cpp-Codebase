#include <iostream>
using namespace std;

int main() {
    int tableSize = 10;
    int numKeys;
    cin >> numKeys;

    int keys[numKeys];
    for (int i = 0; i < numKeys; i++) {
        cin >> keys[i];
    }

    int hashTable[tableSize];
    for (int i = 0; i < tableSize; i++) {
        hashTable[i] = -1;
    }

    for (int i = 0; i < numKeys; i++) {
        int ticketID = keys[i];
        int seat = ticketID % tableSize;

        // Handle collisions using linear probing
        while (hashTable[seat] != -1) {
            seat = (seat + 1) % tableSize;
        }

        // Assign the seat to the guest
        hashTable[seat] = ticketID;
    }

    // Print the seat allocation in the correct order
    for (int i = 0; i < tableSize; i++) {
        if (hashTable[i] != -1) {
            cout << "Seat Number " << i << ": Ticket ID " << hashTable[i] << endl;
        }
    }

    return 0;
}
