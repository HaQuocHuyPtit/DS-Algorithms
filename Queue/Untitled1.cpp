#include <bits/stdc++.h>

#define pb push_back
#define mk make_pair
#define ONLY_CPP ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef long long ll;
typedef vector<int> vi;

ll b[10001] = {0};
ll binary(int n)
{
	vi a;
	while(n)
	{
		a.pb(n%2);
		n/=2;
	}
	ll res=0;
	for (int i=a.size()-1; i>=0; i--) 
		res = 10*res + a[i];

	return res;
}

void Res(int n)
{
	b[0]=0; b[1]=1;
	for (int i=2; i<=n; i++) {
		b[i]=binary(i);
	}	
}

int main()
{
	ONLY_CPP;
	int T;
	cin>>T;
	Res(10000);
	while(T--)
	{
		int n;
		cin>>n;
		for (int i=1; i<=n; i++) {
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
