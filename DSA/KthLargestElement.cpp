//https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/1084055645/

class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {
        priority_queue<int> pq;
        for(int i=0; i<k; i++){
            pq.push(-(arr[i]));
        }
        int l= arr.size();
        for(int i=k; i<l; i++){
            if(-(pq.top())<arr[i]){
                pq.pop();
                pq.push(-(arr[i]));
            }
        }
        return -(pq.top());
    }
};