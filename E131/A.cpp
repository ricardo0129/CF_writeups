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
		int g[4][4];
		int tot = 0;
		FOR(i,2) FOR(j,2){
		cin>>g[i][j];
		if(g[i][j]) tot++;
		}
		if(tot==0) cout<<0<<endl;
		else if(tot<=3) cout<<1<<endl;
		else cout<<2<<endl;

	}
	return 0;
}
