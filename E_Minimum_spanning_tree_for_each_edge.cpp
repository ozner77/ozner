#include <bits/stdc++.h>
using namespace std;
long long res=0;
const int n=220000;
vector<int>profundidad(n);
vector<bool>visitado(n);
vector<int>padre(n);
vector<int>minimumtamanio(n);
vector<pair<int,int>>adj[n];
vector<pair<int,pair<int,int>>>nodos;
vector<pair<int,pair<int,int>>>nodos2;
vector<pair<int,pair<int,int>>>V;
vector<vector<int>>tabla(n,vector<int>(20,-1));
vector<vector<int>>tablamax(n,vector<int>(20,0));
int T[n];
int T1[n];
int con;

void init(int n){
    for(int i=0;i<n;i++){
        padre[i]=i;
        minimumtamanio[i]=1;
    }
}

int ra(int x){
    if(padre[x]==x){
        return x;
    }
    return padre[x]=ra(padre[x]);
}

void join(int a,int b){
    if(rand()%2){
        swap(a,b);
    }
    a=ra(a);
    b=ra(b);
    padre[a]=b;
}

void dfs(int v,int p=1,int pcost=0){
    T[v]=con;
    ++con;
    tabla[v][0]=p;
    tablamax[v][0]=pcost;
    for(int i=1;i<=17;i++){
        tabla[v][i]=tabla[tabla[v][i-1]][i-1];
        tablamax[v][i]=max(tablamax[v][i-1],tablamax[tabla[v][i-1]][i-1]);
    }
    for(int i=0;i<adj[v].size();i++){
        int to=adj[v][i].first;
        int cost=adj[v][i].second;
        if(to==p){
            continue;
        }
        profundidad[to]=profundidad[v]+1;
        dfs(to,v,cost);
    }
    T1[v]=con;
    ++con;
}

int mayor(int v,int span){
    int ret=0;
    for(int i=17;i>=0;--i){
        if(span&(1<<i)){
            ret=max(ret,tablamax[v][i]);
            v=tabla[v][i];
        }
    }
    return ret;
}

bool arriba(int a,int b){
    if(T[a]<=T[b]&&T1[a]>=T1[b]){
        return true;
    }
    return false;
}

int lca(int a,int b){
    if(arriba(a,b)){
        return a;
    }
    if(arriba(b,a)){
        return b;
    }
    for(int i=17;i>=0;--i){
        if(!arriba(tabla[a][i],b)){
            a=tabla[a][i];
        }
    }
    return tabla[a][0];
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        nodos.push_back(make_pair(c,make_pair(a,b)));
        nodos2.push_back(make_pair(c,make_pair(a,b)));
        padre[i]=i;
    }
    sort(nodos.begin(),nodos.end());
    for(int i=0;i<nodos.size();i++){
        int a,b,c;
        a=nodos[i].second.first;
        b=nodos[i].second.second;
        int ta,tb;
        c=nodos[i].first;
        ta=ra(a);
        tb=ra(b);
        if(ta!=tb){
            join(ta,tb);
            V.push_back(make_pair(c,make_pair(a,b)));
            res+=c;
        }
    }
    for(int i=0;i<V.size();i++){
        int v1=V[i].second.first;
        int v2=V[i].second.second;
        int cost=V[i].first;
        adj[v1].push_back(make_pair(v2,cost));
        adj[v2].push_back(make_pair(v1,cost));
    }
    dfs(1);
    for(int i=0;i<nodos2.size();i++){
        int v1=nodos2[i].second.first;
        int v2=nodos2[i].second.second;
        int L=lca(v1,v2);
        int bst=0;
        bst=max(bst,mayor(v1,profundidad[v1]-profundidad[L]));
        bst=max(bst,mayor(v2,profundidad[v2]-profundidad[L]));
        cout<<res+nodos2[i].first-bst<<"\n";
    }
}
