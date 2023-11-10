// You are using GCC
#include <iostream>
using namespace std;

const int MAX_CITIES = 100;

void dfs(int city, int n, int highways[][MAX_CITIES], bool visited[]){
    visited[city]=true;
    for(int i=0; i<n; i++){
        if(highways[city][i]&& !visited[i]){
            dfs(i, n, highways, visited);
        }
    }
}

bool hasChainOfHighways(int n, int highways[][MAX_CITIES], int city1, int city2) {
    //Type your code here
    bool visited[MAX_CITIES]= {false};
    dfs(city1, n, highways, visited);
    return visited[city2];
    
}

int main() {
    int n; 
    cin >> n;

    int highways[MAX_CITIES][MAX_CITIES] = {0};

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> highways[i][j];
        }
    }

    int city1, city2;
    cin >> city1 >> city2;

    if (hasChainOfHighways(n, highways, city1, city2)) {
        cout << "There is a chain of highways connecting City " << city1 << " and City " << city2 << ".";
    } else {
        cout << "There is no chain of highways connecting City " << city1 << " and City " << city2 << ".";
    }

    return 0;
}