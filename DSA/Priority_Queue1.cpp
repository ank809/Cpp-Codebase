// makes max heap automatically
#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue <int> pq;
    pq.push(19);
    pq.push(24);
    pq.push(18);
    pq.push(1);
    pq.push(9);
    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }
}