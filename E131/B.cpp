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
		vi ans;
		vector<bool> used(n+1,false);
		for(int i=1;i<=n;i++){
			if(!used[i]){
				ans.pb(i);
				used[i] = true;
				for(int j=i*2;j<=n;j*=2){
					if(!used[j]){
						ans.pb(j);
						used[j] = true;
					}
				}
			}
		}

		cout<<2<<endl;
		FOR(i,n) cout<<ans[i]<<" ";
		cout<<endl;
	}
	return 0;
}
