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
const int N = (int)1e5+1;
ll prefix[N],suffix[N];
int main()
{
    int n,m;
    cin>>n>>m;
    vll A(n);
    FOR(i,n) cin>>A[i];
    prefix[0] = 0;
    for(int i=1;i<n;i++){
        ll damage = 0;
        if(A[i]<=A[i-1]){
            damage = A[i-1]-A[i];
        }
        prefix[i] = prefix[i-1]+damage;
    }
    suffix[n-1] = 0;
    for(int i=n-2;i>=0;i--){
        ll damage = 0;
        if(A[i]<=A[i+1]){
            damage = A[i+1]-A[i];
        }
        suffix[i] = suffix[i+1]+damage;
    }
    FOR(i,m){
        int s,t;
        cin>>s>>t;
        s--; t--;
        if(s<=t){
            ll d = prefix[t];
            d-=prefix[s];
            cout<<d<<endl;
        }
        else{
            ll d = suffix[t];
                d-=suffix[s];
            
            cout<<d<<endl;
        }
    }




    return 0;
}
