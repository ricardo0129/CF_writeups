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
                vi A(n);
                int x = 0;
                FOR(i,n){
                        cin>>A[i];
                        x = x^A[i];
                }
                int ans = 0;
                FOR(i,n){
                        if( (x^A[i]) == A[i]) ans = A[i];
                }
                cout<<ans<<endl;
	}
	return 0;
}
