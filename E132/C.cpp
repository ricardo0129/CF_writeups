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
const int N = (int)2e5+1;
ll suffix[N][3];
int main()
{
    map<char,int> mp;
    mp['('] = 0; mp[')'] = 1; mp['?'] = 2;
    int t;
    cin>>t;
    while(t--){
        //possible if #of ( is always >= #)  but equal at the end         
        string in;
        cin>>in;
        int n = in.size();
        FOR(j,3) suffix[n-1][j] = 0;
        suffix[n-1][mp[in[n-1]]]++;
        for(int i=n-2;i>=0;i--){
            FOR(j,3) suffix[i][j] = suffix[i+1][j];
            suffix[i][mp[in[i]]]++;
        }
        //not unique if a question is ambigious can be either or 
        //left side X,Y,Z      A,B,C
        //          ( ) ?      ( ) ?
        //          
        int x=0,y=0,z=0;        
        for(int i=1;i<n-1;i++){
            if(in[i]=='(') x++;
            else if(in[i]==')') y++;
            else z++;
            if(in[i]!='?') continue; 
            int a = suffix[i][0], b = suffix[i][1], c = suffix[i][2];
            int maxi = n/2;
            if(x+
        }
        if(unique) cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;
}
