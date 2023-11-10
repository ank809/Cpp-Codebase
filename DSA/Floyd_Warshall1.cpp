#include <iostream>
using namespace std;

#define INF 1000000000
#define MAX_V 4

void detectNegativeCycles(int V, int edges[MAX_V][MAX_V]) {
    int dist[MAX_V][MAX_V];

    // Initialize the distance matrix with edge weights
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            dist[i][j] = edges[i][j];
        }
    }

    // Apply Floyd-Warshall algorithm
    for (int k = 0; k < V; ++k) {
        for (int i = 0; i < V; ++i) {
            for (int j = 0; j < V; ++j) {
                if (dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    // Check for negative cycles
    for (int i = 0; i < V; ++i) {
        if (dist[i][i] < 0) {
            cout << "Yes\n";
            return;
        }
    }

    cout << "No\n";
}

int main() {
    int V, E;
    cin >> V >> E;

    int edges[MAX_V][MAX_V];
    
    // Initialize the distance matrix with INF
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            edges[i][j] = INF;
        }
    }

    // Input the weighted directed edges
    for (int i = 0; i < E; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        edges[u][v] = w;
    }

    detectNegativeCycles(V, edges);

    return 0;
}
