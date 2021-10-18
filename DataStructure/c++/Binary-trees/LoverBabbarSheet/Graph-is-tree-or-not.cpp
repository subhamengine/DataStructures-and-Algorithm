#include<bits/stdc++.h>
using namespace std;
#define MX 101

vector<int> g[MX];
vector<vector<int>> vx,vm;
int parent[MX];

int main(){

	int n,e;
	cin>>n>>e;

	for(int i=0;i<e;i++){
		
		int u,v;
		cin>>u>>v;

		vx.push_back({u,v});

		g[u].push_back(v);
		g[v].push_back(u);
	}

	for(int i=0;i<MX;i++)
		parent[i] = i;

	int flag = 0;

	for(auto it:vx){
		
		int n1,n2;
		
		n1 = it[0];
		n2 = it[1];

		while(n1 != parent[n1]) n1 = parent[n1];
		while(n2 != parent[n2]) n2 = parent[n2];

		if(n1 != n2) parent[n2] = n1;
		else{
			flag = 1;
			vm.push_back(it);
		}
	}

	if(flag){
		cout<<"Graph is Not a Tree!\n";
		cout<<"Extra Edges:\n";
		for(auto it:vm){
			for(auto pt:it)
				cout<<pt<<" ";
			cout<<"\n";
		}
	}
	else cout<<"Graph is a Tree!";

	return 0;
}
