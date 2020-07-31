#include <bits/stdc++.h>
#include <string.h>
#include <string>

#define pb push_back
#define FOR(i,n) for(i = 0; i < n; i++)
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

int a[100000];
int b[100000];
ll tong;
int n,k;
vector < int> ans;
vector < vi > r;
map<vector<int > , int > check;
map<int,int> choose;
int dem = 0;

int reDup(int arr[], int n) 
{ 
    int i; 
    set<int> s; 
    for (i = 0; i < n; i++) { 
        s.insert(arr[i]); 
    } 
    int tmp = 0;
    set<int>::iterator it; 
    for (it = s.begin(); it != s.end(); ++it){
        if(*it != 0){
            a[tmp] = *it;
            // cout<<a[tmp]<<" "<<tmp<<endl;
            tmp++;
        }
    }
    return tmp;
}

void solve(int i,int res){
	if(res == 0){
			r.push_back(ans);
            // cout<<ans<<endl;
	}
	else{
		for(int j = i; j < n ; j++){
			if(res >= a[j]){
				ans.push_back(a[j]);
				res = res- a[j];
				solve(j+1,res);
				res+=a[j];
				ans.pop_back();	
			}
		}
	}
}

void sol(){
    if(n <= k) cout<<"0"<<endl; 
    else if(tong%k == 0){
        solve(0,tong/k);
        for(int i = 0; i < r[0].size(); i++){
            choose[r[0][i]] = 1;
            // cout<<r[0][i]<<" " ;
        }
        // cout<<endl;
        dem = 1;
        for(int i = 0 ; i < r.size();i++){
            int kt = 0;
            for(int j = 0; j < r[i].size(); j++){
                if(choose[r[i][j]] == 1){
                    kt = 1;
                    break;
                }
            }
            if(kt == 0){
                for(int j = 0; j < r[i].size(); j++){
                    choose[r[i][j]] = 1;
                    // cout<<r[i][j]<<" ";
                }
                // cout<<endl;
                dem++;
            }
        }
        if(dem == k){
            cout<<"1"<<endl;
        }
        else cout<<"0"<<endl;
    }
    else cout<<"0"<<endl;
}

int main ()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        ans.clear();
        r.clear();
        check.clear();
        choose.clear();
        cin>>n>>k;
        tong = 0;
        for(int i = 0; i < n; i++){
            cin>>b[i];
            // tong+=b[i];
            // choose[a[i]] = 0;
        }
        n=reDup(b,n);
         for(int i = 0; i < n; i++){
             choose[a[i]] = 0;
             tong += a[i];
         } 
        // cout<<endl<<n<<endl;
        // sort(a,a+n);
        sol();
        // cout<<endl;
        // cout<<n<<endl;
    }
    return 0;
}