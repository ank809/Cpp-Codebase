#include <iostream>
using namespace std;

#define MAX_TASKS 10

bool isCyclic(int n, int dependencies[][2]) {
    // Warshall's Algorithm to detect cycles in the directed graph

    // Create an adjacency matrix
    bool graph[MAX_TASKS][MAX_TASKS] = {false};

    // Initialize the adjacency matrix based on dependencies
    for (int i = 0; i < n; ++i) {
        graph[dependencies[i][0]][dependencies[i][1]] = true;
    }

    // Apply Warshall's Algorithm
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                graph[i][j] = graph[i][j] || (graph[i][k] && graph[k][j]);
            }
        }
    }

    // Check for cycles (if there is an entry [i][i] that is true, then there is a cycle)
    for (int i = 0; i < n; ++i) {
        if (graph[i][i]) {
            return true; // There is a cycle
        }
    }

    return false; // No cycle
}

int main() {
    int n;
    cin >> n;

    int dependencies[MAX_TASKS][2];
    for (int i = 0; i < n; ++i) {
        cin >> dependencies[i][0] >> dependencies[i][1];
    }

    if (!isCyclic(n, dependencies)) {
        cout << "Possible";
    } else {
        cout << "Impossible";
    }

    return 0;
}
