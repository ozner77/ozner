#include <bits/stdc++.h>
using namespace std;
int main(){
    #define ll long long
    ll mod=1000000007;
    ll n;
    cin>>n;
    vector<vector<char>> V(n);
    vector<vector<ll>> dp(n,vector<ll>(n,0));
    dp[0][0]=1;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            char a;
            cin>>a;
            V[i].push_back(a);
        }
    }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            if(V[i][j]=='*'){
                dp[i][j]=0;
            }else{
                if(i>0){
                    dp[i][j]+=dp[i-1][j];
                    dp[i][j]=dp[i][j]%mod;
                }
                if(j>0){
                    dp[i][j]+=dp[i][j-1];
                    dp[i][j]=dp[i][j]%mod;
                }
            }
        }
    }
    cout<<dp[n-1][n-1]%mod;
}