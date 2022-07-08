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
		int n;
		cin>>n;
		vector<pair<pii,int>> inter;

		FOR(i,n){
			int x;
			cin>>x;
			if(x==0){
				inter.pb({{(i+1)/(x+1),n},i});
			}
			else{
				inter.pb({{(i+1)/(x+1),(i+1)/x},i});
			}
		}
		sort(inter.begin(),inter.end());
		vi ans(n);
		int first = 1;
		for(auto x: inter){
			cout<<x.f.f<<" "<<x.f.s<<endl;
			ans[x.s] = first;
			first++;
		}
		
		for(auto x: ans) cout<<x<<" ";
		cout<<endl;


	}
	return 0;
}
