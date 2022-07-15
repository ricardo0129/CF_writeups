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
		vi A(n);
		FOR(i,n) cin>>A[i];
		int i=0;
		for(;i<n;i++){
			if(A[i]!=0) break;
		}
		//first non zero element
		ll ans = 0;
		for(;i<n-1;i++){
			if(A[i]==0) ans++;
			else ans+=A[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}
