#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
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
int t;
vector<bool> visited;
vector<vector<int>> adj;
vector<int> respuesta;
bool ok=true;
void dfs(int cur){
    visited[cur]=true;
    for(auto x:adj[cur]){
        if(respuesta[x]!=0){
            if(respuesta[cur]==respuesta[x]){
                ok=false;
                return;
            }
        }else{
            if(respuesta[cur]==1){
                respuesta[x]=2;
                dfs(x);
            }else{
                respuesta[x]=1;
                dfs(x);
            }
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    adj.resize(n);
    visited.assign(n,false);
    respuesta.assign(n,0);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=0;i<n;i++){
        if(!visited[i]){
            respuesta[i]=1;
            dfs(i);
        }
    }
    if(ok){
        for(auto x:respuesta){
            cout<<x<<" ";
        }
    }else{
        cout<<"IMPOSSIBLE";
    }
}
