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
		string in;
		cin>>in;
		int n = in.size();
		set<char> curr;
		int days = 0;
		FOR(i,n){
			curr.insert(in[i]);
			if(curr.size()==4){
				days++;
				curr.clear();
				curr.insert(in[i]);
			}
		}

		cout<<days+1<<endl;
	}
	return 0;
}
