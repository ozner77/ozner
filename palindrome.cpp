#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll limit;
string A;
vector<vector<vector<vector<vector<ll>>>>> dp;
ll solve(ll x,ll y,ll indx,ll l,ll p){
    if(indx==A.size()){
        return 1;
    }
    if(dp[x][y][indx][l][p]!=-1){
        return dp[x][y][indx][l][p];
    }
     dp[x][y][indx][l][p]=0;
    if(l){
        for(ll i=p;i<=9;i++){
            if(i!=x and i!=y){
                dp[x][y][indx][l][p]+=solve(y,i,indx+1,1,0);
            }
        }
    }else{
        for(ll i=p;i<=A[indx]-'0';i++){
            int libre=0;
            if(i<A[indx]-'0'){
                libre=1;
            }
            if(i!=x and i!=y){
                dp[x][y][indx][l][p]+=solve(y,i,indx+1,libre,0);
            }
        }
    }
    return  dp[x][y][indx][l][p];
}
int main(){
    ll a,b;
    cin>>a>>b;
    A=to_string(a-1);
    dp.assign(11,vector<vector<vector<vector<ll>>>>(11,vector<vector<vector<ll>>>(A.size(),vector<vector<ll>>(2,vector<ll>(2,-1)))));
    int ans1=solve(10,10,0,0,1);
    for(int i=1;i<=A.size();i++){
        ans1+=solve(10,10,i,1,1);
    }

    A=to_string(b);
    dp.assign(11,vector<vector<vector<vector<ll>>>>(11,vector<vector<vector<ll>>>(A.size(),vector<vector<ll>>(2,vector<ll>(2,-1)))));
    int ans2=solve(10,10,0,0,1);
    for(int i=1;i<=A.size();i++){
        ans2+=solve(10,10,i,1,1);
    }
    cout<<ans2-ans1;
}