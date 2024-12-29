#include<bits/stdc++.h>
using namespace std;
void bfs(int n,vector<bool>& mark,vector<int> adj[]){
	queue<int> q;
	q.push(n);
	mark[n]=true;
	while(!q.empty()){
		int v=q.front();
		q.pop();
		printf("%d ",v);
		for(int x:adj[v]){
			if(!mark[x]){
				q.push(x);
				mark[x]=true;
			}
		}
	}
}
int main(){
	int n=5;
	vector<vector<int>> list = {{0, 1}, {0, 2}, {1, 3}, {2, 3}, {3, 4}, {4, 0}};
	vector<int> adj[n];
	vector<bool> mark(n,false);
	for(auto x:list){
		adj[x[0]].push_back(x[1]);
		adj[x[1]].push_back(x[0]);
	}
    bfs(0,mark,adj);
}
