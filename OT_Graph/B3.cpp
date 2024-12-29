#include<bits/stdc++.h>
using namespace std;

bool check(int n,vector<bool>& mark,vector<int> adj[],int parent){
	mark[n]=true;
	for(int x:adj[n]){
		if(!mark[x]){
			if(check(x,mark,adj,n)){
				return true;
			}else if(x!=parent){
				return true;
			}
		}
	}
	return false;
}
int main(){
	int n=5;
	vector<vector<int>> list = {{0, 1}, {1, 2}, {2, 3}, {3, 4}};
	vector<int> adj[n];
	vector<bool> mark(n,false);
	int parent; 
	for(auto x:list){
		adj[x[0]].push_back(x[1]);
		adj[x[1]].push_back(x[0]);
	}
	if(check(0,mark,adj,-1)){
		printf("Do thi co chu trinh");
	}else{
		printf("Do thi khong co chu trinh");
	}
}
