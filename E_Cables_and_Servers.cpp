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
vl p;
vl r;
unordered_map<ll,ll> lol;
void init(ll n) {
    for (ll i = 0; i < n; ++i) {
        p.pb(i);
        r.pb(0);
    }
}
ll encontrar(ll x) {
    if(p[x]!=x){
        p[x]=encontrar(p[x]);
    }
    return p[x];
}

void unir(ll x, ll y) {
    ll rootX=encontrar(x);
    ll rootY=encontrar(y);
    if (rootX!=rootY) {
        if (r[rootX]>r[rootY]) {
            p[rootY]=rootX;
        } else if (r[rootX]<r[rootY]) {
            p[rootX]=rootY;
        } else {
            p[rootY]=rootX;
            r[rootX]++;
        }
    }
}
ll grupos(ll n){
    ll res;
    unordered_set<ll> S;
    for(int i=0;i<n;i++){
        lol[encontrar(i)]=i;
        S.insert(encontrar(i));
    }
    res=S.size();
    return res;
}
int main(){
    ll n,m;
    cin>>n>>m;
    vvl adj(n);
    vvl adj2(n);
    init(n);
    for(int i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        a--;
        b--;
        adj[a].pb(b);
        adj[b].pb(a);
        unir(a,b);
    }
    vector<bool> visited(n, false);
    for(int i=0;i<n;i++){
        if(!visited[i]){
            queue<ll> q;
            q.push(i);
            visited[i] = true;
            while (!q.empty()) {
                ll nodo=q.front();
                q.pop();
                for (auto vec:adj[nodo]){
                    if (!visited[vec]){
                        adj2[nodo].pb(vec);
                        adj2[vec].pb(nodo);
                        visited[vec]=true;
                        q.push(vec);
                    }
                }
            }
        }
    }
    ll conex=grupos(n)-1;
    cout<<conex<<"\n";
    ll uwu=0;
    unordered_set<ll> caca;
    for(auto x:lol){
        ll pi=x.s;
        caca.insert(pi);
    }
    for(int i=0;i<n;i++){
        if(adj[i].size()-adj2[i].size()>0){
            unordered_map<ll,ll> tle;
            for(auto x:adj2[i]){
                tle[x]++;
            }
            for(auto x:adj[i]){
                if(tle[x]==0){
                    cout<<i<<" ";
                    if(conex<=0){
                        break;
                    }else{
                        for(auto y:caca){
                            if(encontrar(i)!=encontrar(y)){
                                cout<<i+1<<" "<<x+1<<" "<<y+1<<"\n";
                                caca.erase(y);
                                conex--;
                                break;
                            }
                        }
                    }
                }
            }
            if(conex<=0){
                break;
            }
        }
    }
}
