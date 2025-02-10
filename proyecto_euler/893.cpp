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
typedef unordered_map<ll,ll> umll;
typedef set<ll> sl;
typedef unordered_set<ll> usl;
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
    vl dp(1e6+1,1e9);
    dp[0]=6;
    dp[1]=2;
    dp[2]=5;
    dp[3]=5;
    dp[4]=4;
    dp[5]=5;
    dp[6]=6;
    dp[7]=3;
    dp[8]=7;
    dp[9]=6;
    for(int i=1;i<=1e6;i++){
        ll con=0;
        string caca=to_string(i);
        for(auto x:caca){
            con+=dp[x-'0'];
        }
        dp[i]=con;
    }
    for(int i=1;i<=1e6;i++){
        ll root=sqrt(i)+2;
        for(int j=1;j<=root;j++){
            if(i%j==0){
                dp[i]=min(dp[i],dp[j]+dp[i/j]+2);
            }
        }
    }
    ll res=0;
    usl S;
    for(int i=0;i<1e6+1;i++){
        if(dp[i]<=18){
            S.insert(i);
        }
    }
    for(int i=1;i<=1e6;i++){
        for(auto x:S){
            if(i-x>=0){
                dp[i]=min(dp[i],dp[x]+dp[i-x]+2);
            }
        }
        if(dp[i]<=18){
            S.insert(i);
        }
    }
    for(int i=1;i<=1e6;i++){
        res+=dp[i];
    }
    cout<<res;
}
