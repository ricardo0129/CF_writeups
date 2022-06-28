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
		vll A(n);
		FOR(i,n) cin>>A[i];
		sort(A.begin(),A.end());
		if(n==3){
			set<ll> tree;
			ll sum = 0;
			FOR(i,n){
				tree.insert(A[i]);
				sum+=A[i];
			}
			if(tree.find(sum)!=tree.end()) cout<<"YES\n";
			else cout<<"NO\n";
		}
		else if(n==4){
			set<ll> tree;
			FOR(i,n) tree.insert(A[i]);
			bool possible = true;
			bool use[4];
			FOR(i,n){
				FOR(j,4) use[j] = true;
				use[i] = false;
				ll sum = 0;
				for(int j=0;j<4;j++){
					if(use[j])
					sum+=A[j];
				}
				if(tree.find(sum)==tree.end()) possible = false;
			}
			if(possible) cout<<"YES\n";
			else cout<<"NO\n";
		}
		else{
			bool possible = true;
			if(A[0]<0 && A[1]<0) possible = false; 
			if(A[n-1]>0 && A[n-2]>0) possible = false;
			if(possible){
				ll sum = 0;
				FOR(i,n) sum+=A[i];
				if(A[0]+A[n-1]==0 || sum==A[0] || sum==A[n-1])possible = true; 
				else possible = false;
			}
			if(possible) cout<<"YES\n";
			else cout<<"NO\n";
		}

	}
	return 0;
}
