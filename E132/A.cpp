#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vll vector<ll>
#define FOR(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define f first
#define s second

const int MOD = (int)1e9+7;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int doors[3];
        FOR(i,3) cin>>doors[i];
        if(doors[x-1]==0) cout<<"NO\n";
        else{
            x = doors[x-1];
            if(doors[x-1]==0) cout<<"NO\n";
            else{
                x = doors[x-1];
                if(doors[x-1]==0) cout<<"YES\n";
                else cout<<"NO\n";
            }
        }

    }
    return 0;
}
