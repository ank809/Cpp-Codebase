// You are using GCC
#include <iostream>
using namespace std;

struct Job {
    int processing_time;
};

void swap(Job& a, Job& b) {
    Job temp = a;
    a = b;
    b = temp;
}

// Function to insert a new job into the binary heap based on processing time
void insertJob(Job heap[], int& heapSize, Job newJob) {
    if(heapSize>=100){
        return;
    }
    int current= heapSize;
    heap[heapSize]=newJob;
    heapSize++;
    
    while(current>0){
        int parentIndex= (current-1)/2;
        if(heap[current].processing_time> heap[parentIndex].processing_time){
            swap(heap[current], heap[parentIndex]);
            current= parentIndex;
        }
        else{
            break;
        }
    }
    
}

void printHeap(Job heap[], int heapSize) {
    for (int i = 0; i < heapSize; i++) {
        cout << heap[i].processing_time << " ";
    }
    cout << endl;
}

int main() {
    int maxSize = 100; 
    Job jobHeap[maxSize];
    int heapSize = 0;
    
    while (true) {
        Job newJob;
        if (!(cin >> newJob.processing_time)) {
            break;
        }

        insertJob(jobHeap, heapSize, newJob);
    }
    
    printHeap(jobHeap, heapSize);

    return 0;
}