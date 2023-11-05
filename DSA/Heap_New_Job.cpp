// You are using GCC
#include <iostream>
using namespace std;

struct Job {
    int priority;
};

void swap(Job& a, Job& b) {
    Job temp = a;
    a = b;
    b = temp;
}
void printHeap(Job heap[], int heapSize){
    for(int i=0; i<heapSize; i++){
        cout<<heap[i].priority<<" ";
    }
}

void insertJob(Job heap[], int& heapSize, int newJobPriority) {
   if(heapSize>=100){
       return ;
   }
   Job newJob;
   newJob.priority= newJobPriority;
   int current= heapSize;
  heap[heapSize]= newJob;
  heapSize++;
  while(current>0){
      int parent= (current-1)/2;
      if(heap[current].priority< heap[parent].priority){
          swap(heap[current], heap[parent]);
          current=parent;
      }
      else{
          break;
      }
  }
}

int main() {
    Job minHeap[100];
    int heapSize = 0;

    while (true) {
        int newJobPriority;
        if (!(cin >> newJobPriority)) {
            break;
        }

        insertJob(minHeap, heapSize, newJobPriority);
    }

    printHeap(minHeap, heapSize);

    return 0;
}