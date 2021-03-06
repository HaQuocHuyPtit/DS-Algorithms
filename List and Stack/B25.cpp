#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fi first
#define se second

using namespace std;

typedef double ld;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> II;

const ld pi=2*acos(0);  
const int im = INT_MAX;
const int in = INT_MIN;
const int limit = 1e5+5;
const ll M = 1e9+7;

ll recur(ll n, ll m){
    if(n==1) return 1;
    else return (recur(n-1,m)+ m-1) % n+1;
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        ll n,m;
        cin>>n>>m;
        cout<<recur(n,m+1)<<endl;
   }
    return 0;
}
