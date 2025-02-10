#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,x;
    cin>>n>>x;
    vector<ll> coins(n);
    for(ll i=0;i<n;i++){
        cin>>coins[i];
    }
    vector<ll> dp(x+1,INT_MAX);
    dp[0]=0;
    for(ll i=1;i<=x;i++){
        for(ll j=0;j<n;j++){
            if(i-coins[j]>=0){
                dp[i]=min(dp[i],dp[i-coins[j]]+1);
            }
        }
    }
    if(dp[x]==INT_MAX){
        cout<<-1;
    }
    else{
        cout<<dp[x];
    }
    return 0;
}