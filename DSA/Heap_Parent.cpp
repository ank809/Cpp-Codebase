// You are using GCC
#include <iostream>
using namespace std;

struct Location {
    int distance;
};

void swap(Location& a, Location& b) {
    Location temp = a;
    a = b;
    b = temp;
}

// Function to insert a new location into the binary heap
void insertLocation(Location* heap, int& heapSize, Location newLocation) {
    if(heapSize>=100){
        return;
    }
    int current=heapSize;
    heap[heapSize]= newLocation;
    heapSize++;
    while(current>0){
        int parent= (current-1)/2;
        if(heap[current].distance<heap[parent].distance){
            swap(heap[current], heap[parent]);
            current= parent;
        }
        else{
            break;
        }
    }
    
}

void printHeap(const Location* heap, int heapSize) {
    for (int i = 0; i < heapSize; i++) {
        cout << heap[i].distance << " ";
    }
    cout << endl;
}

int main() {
    const int maxHeapSize = 100;
    Location* binaryHeap = new Location[maxHeapSize];
    int heapSize = 0;

    while (true) {
        Location newLocation;
        if (!(cin >> newLocation.distance)) {
            break;
        }

        insertLocation(binaryHeap, heapSize, newLocation);
    }

    printHeap(binaryHeap, heapSize);

    delete[] binaryHeap;

    return 0;
}