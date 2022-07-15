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

string in;
int n,c,q;
vector<pll> cp;
ll prefix[50];

char kthchar(ll k){
	if(k<=n) return in[k-1];
	ll L = 0, R = c-1;
	ll pos = -1;
	while(L<=R){
		ll M = (R+L)/2;
		ll val = prefix[M];
		ll w = val-(cp[M].s-cp[M].f);
		if(k<=val && k>=w){
			pos = M;
			break;
		}
		else if(val>k){
			R = M-1;
		}
		else{
			L = M+1;
		}
	}
	if(pos==-1) return 'Q';
	ll off = prefix[pos]-(cp[pos].s-cp[pos].f);
	off = k-off;
	return kthchar(cp[pos].f+off);
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>n>>c>>q;
		cin>>in;
		FOR(i,c){
			ll l,r;
			cin>>l>>r;
			cp.pb({l,r});
			if(i==0) prefix[i] = r-l+1+n;
			else prefix[i] = prefix[i-1]+(r-l+1);
		}
		FOR(i,q){
			ll k;
			cin>>k;
			cout<<kthchar(k)<<endl;
		}
		cp.clear();

	}
	return 0;
}
