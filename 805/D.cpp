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

int occ[26];
int del[26];
int main()
{
	int t;
	cin>>t;
	while(t--){
		string in;
		cin>>in;
		ll p;
		cin>>p;
		memset(occ,0,sizeof occ);
		ll score = 0;
		int n = in.size();
		FOR(i,n){
			score+=(int)(in[i]-'a')+1;
			occ[in[i]-'a']++;
		}
		memset(del,0,sizeof del);
		for(int i=25;i>=0;i--){
			ll x = score-p;
			int dele = min(occ[i],(int)ceil( (x/(double)(i+1) ) ) );
			del[i]+=dele;
			score-=dele*(i+1);
			if(score<=p){
				break;
			}
		}
		FOR(i,n){
			if(del[in[i]-'a']<=0) printf("%c",in[i]);
			del[in[i]-'a']--;
		}
		cout<<endl;
	}
	return 0;
}
