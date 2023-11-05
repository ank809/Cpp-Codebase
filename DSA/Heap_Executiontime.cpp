// You are using GCC
#include <iostream>
using namespace std;

struct Process {
    int executionTime;
};

void swap(Process& a, Process& b) {
    Process temp = a;
    a = b;
    b = temp;
}

void insertProcess(Process heap[], int& heapSize, Process newProcess) {
   int current=heapSize;
   heap[heapSize]= newProcess;
   heapSize++;
   while(current>0){
       int parentIndex= (current-1)/2;
       if(heap[current].executionTime<heap[parentIndex].executionTime){
           swap(heap[current], heap[parentIndex]);
           current=parentIndex;
       }
       else{
           break;
       }
   }
}
void printHeap(Process heap[], int &heapSize){
    for(int i=0; i<heapSize; i++){
        cout<<heap[i].executionTime<<" ";
    }
}

int main() {
    Process minHeap[100];
    int heapSize = 0;
`
    while (true) {
        Process newProcess;
        if (!(cin >> newProcess.executionTime)) {
            break;
        }

        insertProcess(minHeap, heapSize, newProcess);
    }
    printHeap(minHeap, heapSize);

    return 0;
}