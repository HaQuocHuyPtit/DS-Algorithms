#include<bits/stdc++.h>
using namespace std;

int n, t, k, a[100006];
main(){
	cin >> t;
	while(t--){
		cin >> n >> k;;
		for(int i = 0; i < n; i++) cin >> a[i];
		if(!binary_search(a, a+n, k)){
			cout << "NO" << endl;
		}
		else{
			cout << lower_bound (a,a+n,k) - a + 1<< endl;
		}
	}

}

