#include <iostream>
#include <queue>
#include <iomanip> // for setting decimal precision

using namespace std;

int main() {
    int N;
    cin >> N;

    if (N <= 0) {
        cout << "Queue is empty." << endl;
        return 0;
    }

    queue<int> q;
    int sum = 0;

    for (int i = 0; i < N; i++) {
        int element;
        cin >> element;
        q.push(element);
        sum += element;
    }

    double average = static_cast<double>(sum) / N;

    cout << fixed << setprecision(2) << average << endl;

    return 0;
}
