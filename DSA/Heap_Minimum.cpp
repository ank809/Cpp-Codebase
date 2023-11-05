// You are using GCC
#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void insertTask(int heap[], int& heapSize, int newTask) {
    if(heapSize>=100){
        return;
    }
    int c= heapSize;
    heap[heapSize]=newTask;
    heapSize++;
    while(c>0){
        int p=(c-1)/2;
        if(heap[c]>heap[p]){
            swap(heap[c], heap[p]);
            c=p;
        }
        else{
            break;
        }
    }
}

void printHeap(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
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