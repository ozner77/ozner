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
int main(){
    freopen("talent.in","r",stdin);
    freopen("talent.out","w",stdout);
    ll n,w;
    cin>>n>>w;
    vector<pii> V;
    for(int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        V.pb(mp(a,b));
    }
    vl dp(300001,-1e9);
    dp[0]=0;
    for(int i=0;i<n;i++){
        ll t=V[i].s;
        ll w=V[i].f;
        for(int j=300000;j>0;j--){
            if(j-w>=0 && j-w<300000){
                if(dp[j-w]!=-1e9){
                    dp[j]=max(dp[j],dp[j-w]+t);
                }
            }
        }
    }
    /*for(auto x:dp){
        cout<<x<<" ";
    }*/
    double res;
    for(int i=1;i<300000;i++){
        if(dp[i]!=-1e9){
            double xd=static_cast<double>(dp[i]);
            double uwu=static_cast<double>(i);
            double lol=static_cast<double>(xd/uwu);
            if(i>=w){
                res=max(res,lol);
            }
        }
    }
    ll mostrar=res*1000;
    cout<<mostrar;
}
//300000