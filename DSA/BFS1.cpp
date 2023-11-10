// You are using GCC
#include <stdio.h>
#include <limits.h>

void add_edge(int adj[][100], int src, int dest)
{
    adj[src][dest] = 1;
    adj[dest][src] = 1;
}

int BFS(int adj[][100], int src, int dest, int v, int pred[], int dist[])
{
   int queue[v];
   int front=0;
   int rear=0;
   for(int i=0; i<v; i++){
       dist[i]=INT_MAX;
       pred[i]=-1;
   }
   dist[src]=0;
   queue[rear++]=src;
   // BFS LOOP
   while(front!=rear){
       int u= queue[front++];
       if(u==dest)
       return 1;
       for(int i=0; i<v; i++){
           if(adj[u][i]==1 && dist[i]==INT_MAX){
               dist[i]=dist[u]+1;
               pred[i]=u;
               queue[rear++]=i;
           }
       }
   }
   return 0;
}

void printShortestDistance(int adj[][100], int s, int dest, int v, int pred[], int dist[])
{
    int path[v];
    int crawl = dest;
    int pathLength = 0;
    path[pathLength++] = crawl;
    while (pred[crawl] != -1)
    {
        path[pathLength++] = pred[crawl];
        crawl = pred[crawl];
    }

    printf("Shortest path length is: %d\n", dist[dest]);

    printf("Path is: ");
    for (int i = pathLength - 1; i >= 0; i--)
        printf("%d ", path[i]);
}

int main()
{
    int v, e;
    scanf("%d", &v);

    int adj[100][100] = {0};

    scanf("%d", &e);

    for (int i = 0; i < e; i++)
    {
        int src, dest;
        scanf("%d %d", &src, &dest);
        add_edge(adj, src, dest);
    }

    int source, dest;
    scanf("%d %d", &source, &dest);

    int pred[v], dist[v];

    if (BFS(adj, source, dest, v, pred, dist))
        printShortestDistance(adj, source, dest, v, pred, dist);

    return 0;
}