#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;
int main(){
    ll n,x;
    cin>>n>>x;
    vector<ll> coins;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        coins.push_back(a);
    }
    vector<ll> dp(x+1,0);
    dp[0]=1;
    for(ll i=1;i<=x;i++){
        for(ll j=0;j<n;j++){
            if(i-coins[j]>=0){
                dp[i]+=dp[i-coins[j]];
            }
        }
        dp[i]=dp[i]%mod;
    }
    cout<<dp[x]%mod;
}