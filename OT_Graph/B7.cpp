#include<bits/stdc++.h>
using namespace std;

void dfs(int n,vector<bool>& mark,vector<int> adj[]){
	mark[n]=true;
	for(int x:adj[n]){
		if(!mark[x]){
			dfs(x,mark,adj);
		}
	}
}
int main(){
	int n=5;
	int cnt=0;
	vector<vector<int>> list = {{0, 1}, {1, 2}, {2, 0}, {3, 4}};
	vector<int> adj[n];
	vector<bool> mark(n,false);
	int parent; 
	for(auto x:list){
		adj[x[0]].push_back(x[1]);
		adj[x[1]].push_back(x[0]);
	}
	for(int i=0;i<n;i++){
		if(!mark[i]){
			cnt++;
			dfs(i,mark,adj);
		}
	}
	if(cnt>1){
		cout<<"Do thi khong lien thong";
	}else{
		cout<<"Do thi co lien thong";
	}
}
