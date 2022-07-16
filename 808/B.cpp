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
		int n,l,r;
		cin>>n>>l>>r;
		vector<int> ans;
		for(int i=1;i<=n;i++){
			int j = ceil(l/(double)i);
			if(j*i<=r) ans.pb(j*i);
		}
		if(ans.size()<n) cout<<"NO\n";
		else{
			cout<<"YES\n";
			for(auto x: ans) cout<<x<<" ";
			cout<<endl;
		}
	}
	return 0;
}
