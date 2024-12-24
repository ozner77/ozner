#define ll long long
#define pb push_back
#define mp make_pair
#include <bits/stdc++.h>
using namespace std;
int main(){
    ll t,n,m,a,b,c,x;
    cin>>t;
    while(t--){
        cin>>n>>m;
        ll tamanio=n;
        vector<vector<pair<ll,ll>>> adj(n);
        vector<ll> bicicletas(n);
        while(m--){
            cin>>a>>b>>c;
            a--;
            b--;
            adj[a].push_back(mp(b,c));
            adj[b].push_back(mp(a,c));
        }
        for(int i=0;i<n;i++){
            cin>>x;
            bicicletas[i]=x;
        }
        priority_queue<array<ll,3>> pq;
        vector<vector<ll>> distancia(n,vector<ll>(1001,9223372036854775807));
        distancia[0][bicicletas[0]]=0;
        pq.push({0,0,bicicletas[0]});
        while(!pq.empty()){
            ll nodo=pq.top()[1];
            ll bici=pq.top()[2];
            pq.pop();
            for(auto x:adj[nodo]){
                ll vecino=x.first;
                ll peso=x.second;
                ll bicicleta=min(bicicletas[vecino],bici);
                if(distancia[vecino][bicicleta]>distancia[nodo][bici]+peso*bici){
                    distancia[vecino][bicicleta]=distancia[nodo][bici]+peso*bici;
                    pq.push({-distancia[vecino][bicicleta],vecino,bicicleta});
                }
            }
        }
        ll ans=9223372036854775807;
        for(int i=0;i<1001;i++){
            ans=min(ans,distancia[tamanio-1][i]);
        }
        cout<<ans<<"\n";
    }
}