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
 
bool B[(int)2e5];
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vll A(n);
		FOR(i,n) cin>>A[i];
		int piles = 0;
		FOR(i,n) B[i] = false;
		for(int i=1;i<n-1;i++){
			if(A[i]>A[i-1]+A[i+1]){
				piles++;
				B[i] = true;
			}
		}
		if(k==1){
			if(n%2==0) n--;
			cout<<n/2<<endl;
		}
		else{
			cout<<piles<<endl;
		}

	}
	return 0;
}
