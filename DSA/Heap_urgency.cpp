// You are using GCC
#include <iostream>
using namespace std;

struct Task {
    int urgency;
};

void swap(struct Task* a, struct Task* b) {
    struct Task temp = *a;
    *a = *b;
    *b = temp;
}

void insertTask(struct Task heap[], int& heapSize, struct Task newTask) {
    //Type your code here
    int current= heapSize;
    heap[heapSize]= newTask;
    heapSize++;
    while(current>0){
        int parentIndex= (current-1)/2;
        if(heap[current].urgency> heap[parentIndex].urgency){
            swap(heap[current], heap[parentIndex]);
            current= parentIndex;
        }
        else{
            break;
        }
    }
    
}

void printHeap(struct Task heap[], int heapSize) {
    for (int i = 0; i < heapSize; i++) {
        cout << heap[i].urgency << " ";
    }
    cout << endl;;
}

int main() {
    struct Task taskHeap[100];
    int heapSize = 0;
    
    while (1) {
        struct Task newTask;
        if (!(cin >> newTask.urgency) || newTask.urgency == -1)
            break;
        insertTask(taskHeap, heapSize, newTask);
    }
    printHeap(taskHeap, heapSize);
    
    return 0;
}