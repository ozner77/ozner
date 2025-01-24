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
/*bool construir(ll x,ll n,vector<ll> pisos){
    for(ll dia=0;dia<n;dia++){
        if(pisos[dia]!=0){
            return false;
        }
        ll teams=x;
        ll xd=1;
        while(teams!=0){
            if(pisos[dia+xd]==0){
                teams=0;
            }else{
                if(teams>pisos[dia+xd]){
                    teams-=pisos[dia+xd];
                    pisos[dia+xd]=0;
                }else{
                    pisos[dia+xd]-=teams;
                    teams=0;
                }
            }
            xd++;
        }
    }
    return true;
}*/
bool com;
vector<bool> visited;
ll dfs(ll nodo,ll m,vector<vector<ll>> adj){
    ll res=m;
    visited[nodo]=true;
    for(auto x:adj[nodo]){
        if(visited[x]){
            continue;
        }
        res+=dfs(x,m,adj)-1;
    }
    return min(res,0LL);
}
int main(){
    ll n;
    cin>>n;
    visited.assign(n,false);
    vector<vector<ll>> adj(n);
    for(int i=0;i<n-1;i++){
        ll a,b;
        cin >> a >> b;
        a--;
        b--;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    ll l=0;
    ll r=n;
    while(l<r){
        ll m=(l+r)/2;
        visited.assign(n,false);
        if(dfs(0,m,adj)==0){
            r=m;
        }else{
            l=m+1;
        }
    }
    cout<<l<<"\n";
}
//GRANDE AGUUUUUUUUUUUUUUUUUUUS <3