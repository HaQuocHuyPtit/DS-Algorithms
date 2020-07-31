#include<bits/stdc++.h>
using namespace std;

bool isPrime[100006];
void era(){
	memset(isPrime, true, sizeof isPrime);
	int n = 100006;
	isPrime[1] = false;
	isPrime[2] = true;
	isPrime[3] = true;
	for(int i = 2; i <= sqrt(n); i++){
		if(isPrime[i]){
			for(int j = i*i; j <= n; j += i){
				isPrime[j] = false;
			}
		}
	}
}

main(){
	int t;
	cin >> t;
	era();
	while(t--){
		int n, flag = 0;
		cin >> n;
		for(int i = 2; i <= n/2; i++){
			if(isPrime[i] && isPrime[n-i]){
				cout << i << " " << n-i;
				flag = 1;
				break;
			}
		}
		if(flag == 0) cout << -1;
	}
}

