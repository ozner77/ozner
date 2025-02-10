#define ll long long
#include <bits/stdc++.h>
using namespace std;
class SparseTable{
    ll n;
    vector<ll>log2;
    vector<vector<ll>>st;
    ll getLog2(ll x){
        ll log=0;
        while(1<<(log+1)<=x){
            log++;
        }
        return log;
    }
public:
    SparseTable(vector<ll>&V){
        n=V.size();
        log2.resize(n+1,0);
        st.resize(n,vector<ll>(getLog2(n)+1));
        for(ll i=2;i<=n;++i){
            log2[i]=log2[i/2]+1;
        }
        for(ll i=0;i<n;++i){
            st[i][0]=i;
        }
        for(ll j=1;(1<<j)<=n;++j){
            for(ll i=0;i+(1<<j)-1<n;++i){
                ll l=st[i][j-1];
                ll r=st[i+(1<<(j-1))][j-1];
                if(V[l]<=V[r]){
                    st[i][j]=l;
                }else{
                    st[i][j]=r;
                }
            }
        }
    }
    ll query(ll L,ll R,vector<ll>&V){
        ll len=R-L+1;
        ll k=log2[len];
        ll l=st[L][k];
        ll r=st[R-(1<<k)+1][k];
        return(V[l]<=V[r])?l:r;
    }
};
vector<ll>depth,nodes,last;
ll global_index=0;
void initlast(ll n){
    last.resize(n);
}
void dfs(ll node,vector<bool>&visited,vector<vector<ll>>&adj,ll prof){
    visited[node]=true;
    nodes.push_back(node);
    depth.push_back(prof);
    last[node]=global_index;
    global_index++;
    for(auto x:adj[node]){
        if(!visited[x]){
            dfs(x,visited,adj,prof+1);
            nodes.push_back(node);
            depth.push_back(prof);
            last[node]=global_index;
            global_index++;
        }
    }
}
int main(){
    ll n,q;
    cin>>n>>q;
    vector<vector<ll>>adj(n);
    ll a,x,y;
    for(ll i=1;i<n;++i){
        cin>>a;
        --a;
        adj[a].push_back(i);
        adj[i].push_back(a);
    }
    initlast(n);
    vector<bool>visited(n,false);
    dfs(0,visited,adj,0);
    SparseTable st(depth);
    while(q--){
        cin>>x>>y;
        --x;--y;
        ll xd=min(last[x],last[y]);
        ll lol=max(last[x],last[y]);
        ll result=st.query(xd,lol,depth);
        result=nodes[result]+1;
        cout<<result<<"\n";
    }
}