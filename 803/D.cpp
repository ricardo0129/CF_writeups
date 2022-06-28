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
		int l = 1, r= n;
		FOR(i,15){
			if(l==r){
				cout<<"! "<<l<<endl;
				break;
			}

			int m = (l+r)/2;	
			cout<<"? "<<l<<" "<<m<<endl;
			int badones = 0;
			for(int j=l;j<=m;j++){
				int x;
				cin>>x;
				if(x>m || x<l) badones++;
			}
			int total = m-l+1;
			if((total-badones)%2==1){
				r=m;
							
			}
			else{
				l=m+1;
			}
		}
	}
	return 0;
}
