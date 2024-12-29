#include<bits/stdc++.h>
using namespace std;
void dfs(int n,vector<bool>& mark,vector<int> adj[]){
	mark[n]=true;
	printf("%d ",n);
	for(int x:adj[n]){
	
		if(!mark[x]){
			dfs(x,mark,adj);
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
	dfs(0,mark,adj);
}
