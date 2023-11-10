#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void bfsTraversal(int V, vector<vector<int>>& adjList) {
    vector<bool> visited(V, false);
    queue<int> q;

    // Starting from the first webpage (0)
    q.push(0);
    visited[0] = true;

    cout << "BFS Traversal Order: ";

    while (!q.empty()) {
        int currentWebpage = q.front();
        cout << currentWebpage << " ";
        q.pop();

        for (int neighbor : adjList[currentWebpage]) {
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }

    cout << endl;
}

int main() {
    int V, E;
    cin >> V >> E;

    // Adjacency list to represent the graph
    vector<vector<int>> adjList(V);

    // Input the hyperlinks
    for (int i = 0; i < E; ++i) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
    }

    bfsTraversal(V, adjList);

    return 0;
}
