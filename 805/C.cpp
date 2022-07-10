#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define f first
#define s second
#define FOR(i,n) for(int i=0;i<n;i++)

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		map<ll,ll> low,high; 
		FOR(i,n){
			ll x;
			cin>>x;
			if(low.count(x)<=0){
				low[x] = i;
			}
			high[x] = i;
		}
		FOR(i,q){
			ll x,y;
			cin>>x>>y;
			ll a=-1,b=-1;
			if(low.count(x)>0) a = low[x];
			if(high.count(y)>0) b = high[y];
			if(a==-1 || b==-1) cout<<"NO\n";
			else if(a<=b) cout<<"YES\n";
			else cout<<"NO\n";

		}

	}
	return 0;
}
