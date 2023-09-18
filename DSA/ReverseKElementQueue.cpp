#include <iostream>
#include <vector>

using namespace std;

// Function to reverse the order of the first K ticket requests in the queue
void reverseFirstK(vector<int>& queue, int K) {
    if (K <= 0 || K > queue.size()) {
        cout << "Invalid K value" << endl;
        return;
    }

    // Reverse the first K elements using two-pointer approach
    int left = 0;
    int right = K - 1;
    while (left < right) {
        swap(queue[left], queue[right]);
        left++;
        right--;
    }
}

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> ticketQueue(N);
    for (int i = 0; i < N; i++) {
        cin >> ticketQueue[i];
    }

    // Reverse the first K elements
    reverseFirstK(ticketQueue, K);

    // Print the updated ticket queue
    for (int i = 0; i < N; i++) {
        cout << ticketQueue[i] << " ";
    }

    cout << endl;

    return 0;
}
