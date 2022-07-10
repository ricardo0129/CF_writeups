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

bool check(string a, string b){
	if(a.size()<b.size()) return false;
	FOR(i,b.size()) if(b[i]!=a[i]) return false;
	return true;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> A(n),B(n);
		FOR(i,n)
			cin>>A[i];
		FOR(i,n)
			cin>>B[i];
		
		multiset<string> At;
		FOR(i,n){
			while(B[i]%2==0) B[i]/=2;
			string v = "";
			while(B[i]){
				v+=to_string(B[i]&1);
				B[i]/=2;
			}
			reverse(v.begin(),v.end());
			//cout<<v<<endl;
			At.insert(v);

		}
		vector<string> BB;
		FOR(i,n){
			while(A[i]%2==0) A[i]/=2;
			string v = "";
			while(A[i]){
				v+=to_string(A[i]&1);
				A[i]/=2;
			}
			reverse(v.begin(),v.end());
			BB.pb(v);
		}

		sort(BB.begin(),BB.end());
		reverse(BB.begin(),BB.end());
		bool possible=true;
		FOR(i,BB.size()){
			multiset<string>::iterator it = At.lower_bound(BB[i]);
			if(it==At.end()){
				possible = false;
				break;
			}
			if(!check(*it,BB[i])){
				possible = false;
				break;
			}
			At.erase(it);
		}


		if(possible) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
