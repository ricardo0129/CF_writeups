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
		bool possible = true;
		vi A(n);
		FOR(i,n) cin>>A[i];
		if(A[0]==1) cout<<"YES\n";
			else{
			for(int i=n-1;i>0;i--){
				if(A[i]<A[i-1]) possible = false;
				if(A[i]%A[i-1]!=0) possible = false;
			}
			if(!possible) cout<<"NO\n";
			else cout<<"YES\n";
		}
	}
	return 0;
}
