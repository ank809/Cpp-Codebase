#include <iostream>
using namespace std;

const int TABLE_SIZE = 10;

int hashTable[TABLE_SIZE];

// Function to perform quadratic probing and find the next available slot
int quadraticProbe(int key, int attempt) {
    int offset = attempt * attempt;
    return (key + offset) % TABLE_SIZE;
}

// Function to insert a key into the hash table using quadratic probing
void insertKey(int key) {
    int attempt = 0;
    int index = key % TABLE_SIZE;

    // Quadratic probing to handle collisions
    while (hashTable[index] != 0) {
        attempt++;
        index = quadraticProbe(key, attempt);
    }

    hashTable[index] = key;
}

int main() {
    int tableSize = 10;
    int numKeys;
    cin >> numKeys;

    int keys[numKeys];
    for (int i = 0; i < numKeys; i++) {
        cin >> keys[i];
    }

    // Insert keys into the hash table
    for (int i = 0; i < numKeys; i++) {
        insertKey(keys[i]);
    }

    // Print the values successfully inserted into the hash table
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (hashTable[i] != 0) {
            cout << hashTable[i] << " ";
        }
    }

    return 0;
}
