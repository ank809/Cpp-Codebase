#include <iostream>
using namespace std;

bool isReachable(int **graph, int u, int v, int n) {
    return graph[u][v];
}

void computeReachability(int **graph, int n) {
    // Floyd-Warshall algorithm for computing transitive closure
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                graph[i][j] = graph[i][j] || (graph[i][k] && graph[k][j]);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    // Dynamically allocate memory for the adjacency matrix
    int **graph = new int *[n];
    for (int i = 0; i < n; ++i) {
        graph[i] = new int[n];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> graph[i][j];
        }
    }

    computeReachability(graph, n);

    cout << "Transitive Closure Matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    int u, v;
    cin >> u >> v;

    if (isReachable(graph, u, v, n)) {
        cout << "Path Exists\n";
    } else {
        cout << "Path does not Exist\n";
    }

    // Deallocate dynamically allocated memory
    for (int i = 0; i < n; ++i) {
        delete[] graph[i];
    }
    delete[] graph;

    return 0;
}
