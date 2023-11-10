// You are using GCC
#include <stdio.h>

#define MAX_SIZE 100

int dfs(int adjMatrix[][MAX_SIZE], int n, int start, int end, int visited[MAX_SIZE]) {
    if (start == end)
        return 1;

    visited[start] = 1;

    for (int i = 0; i < n; ++i) {
        if (adjMatrix[start][i] && !visited[i] && dfs(adjMatrix, n, i, end, visited))
            return 1;
    }

    return 0;
}

int validPath(int n, int edges[][2], int m, int start, int end) 
{
    //Type your code
    int adj[MAX_SIZE][MAX_SIZE]={0};
    for(int i=0; i<m; i++){
        adj[edges[i][0]][edges[i][1]]=1;
        adj[edges[i][1]][edges[i][0]]=1;
    }
    int visited[MAX_SIZE]={0};
    return dfs(adj, n, start, end, visited);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int edges[MAX_SIZE][2];
    for (int i = 0; i < m; ++i) {
        scanf("%d %d", &edges[i][0], &edges[i][1]);
    }

    int start, end;
    scanf("%d %d", &start, &end);

    if (validPath(n, edges, m, start, end)) {
        printf("There is a path from %d to %d\n", start, end);
    } else {
        printf("There is no path from %d to %d\n", start, end);
    }

    return 0;
}