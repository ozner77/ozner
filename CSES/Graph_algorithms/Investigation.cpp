#include <bits/stdc++.h>
using namespace std;
long long MOD = 1e9 + 7;
int main() {
    long long n,m;
    cin>>n>>m;
    vector<vector<pair<long long,long long>>> G(n+1);
    for(long long i=0;i<m;i++){
        long long a,b,c;
        cin>>a>>b>>c;
        G[a].push_back({b,c});
    }
    vector<long long> dis(n+1,LLONG_MAX);
    vector<long long> formas(n+1,0);
    vector<long long> viajesMin(n+1,LLONG_MAX);
    vector<long long> viajesMax(n+1,0);
    dis[1]=0;
    formas[1]=1;
    viajesMin[1]=0;
    priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<>> qp;
    qp.push({0,1});
    while(!qp.empty()){
        auto current=qp.top();
        qp.pop();
        long long cdist=current.first, node=current.second;
        if(cdist>dis[node]){
            continue;
        }
        for(auto &viaje:G[node]){
            long long sig=viaje.first, w=viaje.second;

            if(dis[node]+w<dis[sig]){
                dis[sig]=dis[node]+w;
                formas[sig]=formas[node];
                viajesMin[sig]=viajesMin[node]+1;
                viajesMax[sig]=viajesMax[node]+1;
                qp.push({dis[sig],sig});
            }
            else if(dis[node]+w==dis[sig]){
                formas[sig]=(formas[sig]+formas[node])%MOD;
                viajesMin[sig]=min(viajesMin[sig],viajesMin[node]+1);
                viajesMax[sig]=max(viajesMax[sig],viajesMax[node]+1);
            }
        }
    }
    cout<<dis[n]<<" "<<formas[n]<<" "<<viajesMin[n]<<" "<<viajesMax[n];
}
//sin esto nunca hubiera aprendido dijkstra y otras cosas, problema que me sirvio mucho la verdad
//por eso también lo hice mas ordenado xddd