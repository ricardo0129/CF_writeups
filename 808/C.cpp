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

const int INF = (int)1e9+7;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		vi A(n);
		FOR(i,n) cin>>A[i];
		vector<int> ans(n);
		vi lowest(n,-INF);
		FOR(i,n){
			if(A[i]<=q){
				ans[i] = 1;
				lowest[i] = A[i];
			}
		}
		vi dp(n);
		dp[n-1] = lowest[n-1];
		for(int i=n-2;i>=0;i--){
			dp[i] = max(dp[i+1],lowest[i]);
		}
		FOR(i,n){
			if(!ans[i] && (q-1)>=dp[i]){
				q--;
				ans[i] = 1;
			}
			if(q==0) break;
		}

		FOR(i,n) cout<<ans[i];
		cout<<endl;

	}
	return 0;
}
