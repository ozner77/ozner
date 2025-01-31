#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
typedef pair<ll,ll> pll;
typedef pair<int,int> pii;
typedef map<int,int> mii;
typedef map<ll,ll> mll;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vpii> vvpii;
typedef vector<vpll> vvpll;
typedef vector<vvi> vvvi;
typedef vector<vvl> vvvl;
vvl dp;
vl V;
ll fun(ll x,ll y,ll anty){
    if(x>anty || y>anty){
        return 0;
    }
    if(x>=y){
        return 1;
    }
    if(dp[x][y]!=1e9){
        return dp[x][y];
    }
    for(int i=x;i<=y;i++){
        if(V[x]==V[i]){
            dp[x][y]=min(dp[x][y],fun(x+1,i-1,y)+fun(i+1,y,y));
        }
    }
    return dp[x][y];
}
int main(){
    ll n;
    cin>>n;
    for(int i=0;i<n;i++){
        ll a;
        cin>>a;
        V.pb(a);
    }
    vector<ll> caca(n,1e9);
    for(int i=0;i<n;i++){
        dp.pb(caca);
    }                                             
    cout<<fun(0,n-1,n);
}
//plantillita