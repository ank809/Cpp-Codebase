#include <iostream>
using namespace std;

int main() {
    int tableSize = 10, maxLoad = -1, maxIndex = -1;
    int numTrucks;
    cin >> numTrucks;
    
    int trucks[numTrucks];
    for (int i = 0; i < numTrucks; i++) {
        cin >> trucks[i];
    }

    int hashTable[tableSize];
    for (int i = 0; i < tableSize; i++) {
        hashTable[i] = -1;
    }

    for (int i = 0; i < numTrucks; i++) {
        int load = trucks[i];
        int index = load % tableSize;

        // Quadratic probing to handle collisions
        int attempt = 0;
        while (hashTable[index] != -1) {
            attempt++;
            index = (index + attempt * attempt) % tableSize;
        }

        hashTable[index] = load;
    }

    for (int i = 0; i < tableSize; i++) {
        if (hashTable[i] != -1) {
            cout << "The lorry that has high load capacity is in index " << i << "." << endl;
            if (hashTable[i] > maxLoad) {
                maxLoad = hashTable[i];
                maxIndex = i;
            }
        }
    }

    cout << "The lorry that has the highest loading capacity is in index " << maxIndex << "." << endl;

    return 0;
}
