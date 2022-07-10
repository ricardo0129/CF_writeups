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

const int N = (int)2e5+7;
int n;
set<int> G[N];
bool biparte;
int occ[N];
int color[N];
vi B[N];

void dfs(int u, int c){
	color[u] = c;
	for(int v: G[u]){
		if(!color[v]) dfs(v,c*-1);
		else if(color[v]==color[u]) biparte = false;
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		bool possible = true;
		vector<pii> dominos;
		FOR(i,n){
			int a,b;
			cin>>a>>b;
			if(a==b) possible = false;
			dominos.pb({a,b});
			occ[a]++;
			if(a!=b)
			occ[b]++;

			if(occ[a]==3 || occ[b]==3) possible = false;
			B[a].pb(i);
			B[b].pb(i);
		}
		if(!possible) cout<<"NO\n";
		else{
			FOR(i,n){
				int a = dominos[i].f;
				int b = dominos[i].s;
				for(auto x: B[a]){
					if(x!=i){
						G[i].insert(x);
					}
				}
				for(auto x: B[b]){
					if(x!=i){
						G[i].insert(x);
					}
				}
			}

			biparte = true;
			FOR(i,n){
				if(color[i]==0){
					dfs(i,1);
				}
			}
			if(!biparte) cout<<"NO\n";
			else cout<<"YES\n";

		}
		FOR(i,n+1){
			G[i].clear();
			B[i].clear();
			occ[i] = 0;
			color[i] = 0;
		}



	}
	return 0;
}
