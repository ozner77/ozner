#define ll long long
using namespace std;
#include<bits/stdc++.h>
using namespace std;
vector<ll>dp;
int main(){
    ll n,k;
    cin>>n>>k;
    dp.resize(k+1,0);
    dp[0]=1;
    ll MOD=998244353;
    while(n--){
        char a;
        ll b;
        cin>>a>>b;
        if(a=='+'){
            for(ll i=k;i>=b;i--){
                dp[i]=(dp[i]+dp[i-b])%MOD;
            }
        }else{
            vector<ll> dp_copy=dp;
            for(ll i=0;i<=k;i++){
                if(i+b<=k){
                    dp[i+b]=(dp[i+b]-dp[i])%MOD;
                    dp[i+b]+=MOD;
                    dp[i+b]=dp[i+b]%MOD;
                }
            }
        }
        cout<<dp[k]<<"\n";
    }
}

