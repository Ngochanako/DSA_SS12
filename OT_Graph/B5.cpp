#include<bits/stdc++.h>
using namespace std;

bool check(int n,vector<int>& mark,vector<int> adj[]){
	mark[n]=1;
	for(int x:adj[n]){
	    if(mark[x]==1){
	    	return true;
		}else if(mark[x]==0){
			if(check(x,mark,adj)){
				return true;
			}
		}		
	}
	mark[n]=2;
	return false;
}
int main(){
	int n=4;
	vector<vector<int>> list = {{0, 1}, {1, 2}, {2, 0}, {3, 1}};
	vector<int> adj[n];
	vector<int> mark(n,0);
	int parent; 
	for(auto x:list){
		adj[x[0]].push_back(x[1]);
	}
	if(check(0,mark,adj)){
		cout<<"Do thi co chu trinh";
	}else{
		cout<<"Do thi khong co chu trinh";
	}
}
