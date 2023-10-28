// You are using GCC
#include <iostream>
using namespace std;

struct Player {
    int score;
};

void swap(Player& a, Player& b) {
    Player temp = a;
    a = b;
    b = temp;
}

void printHeap(Player heap[], int &heapSize){
    for(int i=0; i<heapSize; i++){
        cout<<heap[i].score<<" ";
    }
}
void insertPlayer(Player heap[], int& heapSize, Player newPlayer) {
    if(heapSize>=100){
        return;
    }
    int current= heapSize;
     heap[heapSize]= newPlayer;
    heapSize++;
    while(current>0){
        int parentIndex=(current-1)/2;
        if(heap[current].score>heap[parentIndex].score){
            swap(heap[current], heap[parentIndex]);
            current= parentIndex;
        }
        else{
            break;
        }
    }
}

int main() {
    Player maxHeap[100];
    int heapSize = 0;
    
    while (true) {
        Player newPlayer;
        if (!(cin >> newPlayer.score)) {
            break;
        }

        insertPlayer(maxHeap, heapSize, newPlayer);
    }

    printHeap(maxHeap, heapSize);

    return 0;
}