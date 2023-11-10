#include <iostream>
using namespace std;

int midSquareHash(int key, int tableSize) {
    int squared = key * key;
    int middleDigit = (squared / 10) % 100; // Extract the middle two digits
    int hashIndex = middleDigit % tableSize; // Perform modulo operation to get hash index
    return hashIndex;
}

int main() {
    int tableSize = 100, maxWeight = -1, maxIndex = -1;
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
        int key = keys[i];
        int index = midSquareHash(key, tableSize);

        // Linear probing to handle collisions
        while (hashTable[index] != -1) {
            index = (index + 1) % tableSize;
        }

        hashTable[index] = key;
    }

    for (int i = 0; i < tableSize; i++) {
        if (hashTable[i] != -1 && hashTable[i] > maxWeight) {
            maxWeight = hashTable[i];
            maxIndex = i;
        }
    }

    cout << "Weight: " << maxWeight << ", Index: " << maxIndex;

    return 0;
}
