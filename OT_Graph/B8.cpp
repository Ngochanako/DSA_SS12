#include <bits/stdc++.h>
using namespace std;

void bfs(int start, vector<int> adj[], vector<int>& distance) {
    queue<int> q;
    q.push(start);
    distance[start] = 0; 

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        for (int neighbor : adj[node]) {
            if (distance[neighbor] == -1) { 
                distance[neighbor] = distance[node] + 1;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    int n = 6; 
    vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 3}, {3, 4}, {2, 5}};
    vector<int> adj[n];

    for (auto edge : edges) {
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }

    int source = 0; 
    vector<int> distance(n, -1); 

    bfs(source, adj, distance);

    cout << "Khoang cach tu dinh " << source << " den cac dinh khac:\n";
    for (int i = 0; i < n; i++) {
        cout << "dinh " << i << ": " << distance[i] << endl;
    }

    return 0;
}

