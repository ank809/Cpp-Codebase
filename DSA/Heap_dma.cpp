// You are using GCC
#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void insertTask(int heap[], int& heapSize, int newTask) {
    int current= heapSize;
    heap[heapSize]=newTask;
    heapSize++;
    while(current>0){
        int parentIndex= (current-1)/2;
        if(heap[current]>heap[parentIndex]){
            swap(heap[current], heap[parentIndex]);
            current= parentIndex;
        }
        else{
            break;
        }
    }
}
void printHeap(int heap[], int &n){
    for(int i=0; i<n; i++){
        cout<<heap[i]<<" ";
    }
}

int main() {
    int maxHeapSize = 100;
    int maxHeap[maxHeapSize];
    int heapSize = 0;

    while (true) {
        int newTask;
        if (!(cin >> newTask)) {
            break;
        }

        if (heapSize < maxHeapSize) {
            insertTask(maxHeap, heapSize, newTask);
        } else {
            cout << "Heap is full, cannot insert more tasks." << endl;
            break;
        }
    }

    printHeap(maxHeap, heapSize);

    return 0;
}