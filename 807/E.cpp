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

int occ[(int)2e6+1];
int main()
{
	int n,q;
	cin>>n>>q;
	vi A(n);
	FOR(i,n){
		cin>>A[i];
		occ[A[i]]++;
	}
	
	FOR(i,q){
		int k,l;
		cin>>k>>l;
		occ[A[k-1]]--;
		A[k-1] = l;
		occ[A[k-1]]++;
		int L = 0,R = (int)1e6;
		int lb = ceil(log2(n));
		int ans = 0;
		while(L<=R){
			int M = (L+R)/2;
			int carry = 0;
			for(int i=lb;i>0;i--){
				//2^lb
				int off = carry;
				if(M-i>=0) off+=occ[M-i];
				carry = off/2;
			}
			carry+=occ[M];
			if(carry>=1){
				L = M+1;
				ans = M;
			}
			else{
				R = M-1;
			}
		}
		cout<<ans<<endl;
		
	}
	return 0;
}
