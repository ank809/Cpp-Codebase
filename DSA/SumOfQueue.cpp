#include <iostream>
#include <queue>

using namespace std;

int main() {
    int N;
    cin >> N;

    queue<int> q;
    int sum = 0;

    for (int i = 0; i < N; i++) {
        int element;
        cin >> element;
        q.push(element);
    }

    while (!q.empty()) {
        sum += q.front();
        q.pop();
    }

    if (N == 0) {
        cout << "Queue is empty." << endl;
    } else {
        cout << sum << endl;
    }

    return 0;
}
