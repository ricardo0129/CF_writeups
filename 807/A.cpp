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
		int n,x;
		cin>>n>>x;
		vi A(2*n);
		FOR(i,2*n) cin>>A[i];
		sort(A.begin(),A.end());
		bool possible = true;
		FOR(i,n){
			if((A[i+n]-A[i])<x) possible = false;
		}
		if(!possible) cout<<"NO\n";
		else cout<<"YES\n";
	}
	return 0;
}
