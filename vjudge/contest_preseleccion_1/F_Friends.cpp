#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<vector<ll>> V(n);
        while(m--){
            ll a,b;
            cin>>a>>b;
            a--;b--;
            V[a].push_back(b);
            V[b].push_back(a);
        }
        vector<bool> visit(n,false);
        queue<ll> q;
        ll res=0;
        ll con;
        set<ll> camino;
        for(int i=0;i<n;i++){
            if(!visit[i]){
                con=0;
                q.push(i);
                while(!q.empty()){
                    con++;
                    ll nodo=q.front();
                    q.pop();
                    visit[nodo]=true;
                    for(auto x:V[nodo]){
                        if(!visit[x]){
                            visit[x]=true;
                            q.push(x);
                        }
                    }
                }
            }
            if(con>res){
                res=con;
            }
        }
        cout<<res<<"\n";
    }
}