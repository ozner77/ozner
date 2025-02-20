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
    ll n,m;
    cin>>n>>m;
    vl V;
    vvl adj(n+1);
    for(ll i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        adj[b].pb(a);
        adj[a].pb(b);
    }
    vector<bool> visited(n+1,false);
    for(ll i=1;i<=n;i++){
        if(!visited[i]){
            V.pb(i);
            queue<ll> q;
            q.push(i);
            visited[i]=true;
            while(!q.empty()){
                ll act=q.front();
                q.pop();
                visited[act]=true;
                for(auto x:adj[act]){
                    if(!visited[x]){
                        visited[x]=true;
                        q.push(x);
                    }
                }
            }
        }
    }
    cout<<V.size()-1;
    cout<<"\n";
    for(ll i=1;i<V.size();i++){
        cout<<V[i-1]<<" "<<V[i]<<"\n";
    }
}
