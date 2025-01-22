#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        map<ll,ll> res;
        vector<bool> V(n+1,false);
        vector<vector<bool>> adj;
        for(ll i=0;i<=n;i++){
            adj.push_back(V);
        }
        for(ll i=0;i<n-1;i++){
            ll a,b;
            cin>>a>>b;
            adj[a][b]=true;
            adj[b][a]=true;
            res[a]++;
            res[b]++;
        }
        ll max1=0;
        ll max2=0;
        ll uwu1=0,uwu2=0;
        for(auto x:res){
            if(x.second>max1){
                max2=max1;
                max1=x.second;
                uwu2=uwu1;
                uwu1=x.first;
            }else if(x.second>max2){
                max2=x.second;
                uwu2=x.first;
            }
        }
        if(adj[uwu1][uwu2]){
            ll xd=0;
            for(auto x:res){
                if(x.second==max1){
                    if(x.first!=uwu1 && x.first!=uwu2){
                        if(!adj[x.first][uwu1]){
                            xd=1;
                        }
                    }
                }
                if(x.second==max2){
                    if(x.first!=uwu1 && x.first!=uwu2){
                        if(!adj[x.first][uwu2]){
                            xd=1;
                        }
                    }
                }
            }
            cout<<max1+max2-2+xd<<"\n";
        }else{
            cout<<max1+max2-1<<"\n";
        }
    }
}
