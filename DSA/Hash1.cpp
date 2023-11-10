#include <iostream>
#include <vector>
#include <algorithm>

struct HashEntry {
    int key;
    int index;

    HashEntry(int k, int i) : key(k), index(i) {}
};

// Function to perform linear probing and find the next available slot
int linearProbe(int hashTable[], int key, int size) {
    int index = key % size;
    int i = 1;

    while (hashTable[index] != -1) {
        index = (key + i) % size;
        i++;
    }

    return index;
}

// Function to insert a key into the hash table using linear probing
void insertKey(int hashTable[], int key, int size, std::vector<HashEntry>& entries) {
    int index = linearProbe(hashTable, key, size);
    hashTable[index] = key;
    entries.push_back(HashEntry(key, index));
}

// Comparator function for sorting entries by index
bool compareEntries(const HashEntry& a, const HashEntry& b) {
    return a.index < b.index;
}

int main() {
    int size, n;
    std::cin >> size >> n;

    int hashTable[17];
    std::vector<HashEntry> entries;

    for (int i = 0; i < size; ++i) {
        hashTable[i] = -1;  // Initialize hash table slots to -1 (indicating empty)
    }

    for (int i = 0; i < n; ++i) {
        int key;
        std::cin >> key;
        insertKey(hashTable, key, size, entries);
    }

    // Sort entries by index in ascending order
    std::sort(entries.begin(), entries.end(), compareEntries);

    // Print the sorted entries
    for (const HashEntry& entry : entries) {
        std::cout << "index: " << entry.index << ", value: " << entry.key << std::endl;
    }

    return 0;
}
