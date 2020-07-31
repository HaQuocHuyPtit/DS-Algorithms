#include<bits/stdc++.h>
using namespace std;

main(){
	int t, v, e;
	cin >> t;
	while(t--){
		cin >> v >> e;
		vector<int>adj[v+1];
		while(e--){
			int x, y;
			cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		for(int i = 0; i < v; i++){
			cout << i+1 <<": ";
			for(int j = 0; j < adj[i+1].size(); j++){
				cout << adj[i+1][j] << " ";
			}
			cout << endl;
		}
	}

}

