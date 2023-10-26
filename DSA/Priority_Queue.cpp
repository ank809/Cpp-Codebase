#include<iostream>
using namespace std;
#include<queue>
class PriorityQueue{

    public:
    PriorityQueue(){};
    priority_queue<int> maxheap;
    //priority_queue<int> q;

    void insert(int val){
        maxheap.push(val);
    }

    int  pop(){
       int remove= maxheap.top();
       maxheap.pop();
       return remove;

    }
    int peek(){
        return maxheap.top();
    }
};
int main(){
    PriorityQueue q;
    q.insert(90);
    q.insert(48);
    q.insert(79);
    q.insert(16);
    q.insert(35);
    q.insert(14);
    cout<<q.pop()<<endl;
    cout<<q.peek()<<endl;
    

}