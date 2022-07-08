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

ll A[(int)2e5+1];
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		FOR(i,n) A[i] = 0;
		FOR(i,m){
			int x;
			cin>>x;
			x--;
			A[x]++;
		}

		ll L = 1, R = 2e7;
		ll ans = R;
		while(L<=R){
			ll M = (R-L)/2+L;
			//number of hours
			ll tasks = 0;
			FOR(i,n){
				ll tt = min(M,A[i]);	
				ll ss = (M-tt)/2;
				tasks+=tt+ss;
			}
			if(tasks>=m){
				ans = M;
				R = M-1;
			}
			else L = M+1;
		}
		cout<<ans<<endl;
	}
	return 0;
}
