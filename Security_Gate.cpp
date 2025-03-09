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
vector<string> L;
vector<string> L2;
vector<string> L4;
ll ans=0;
vector<bool> visited;
void generar(vector<char> V){
    bool ok=true;
    for(ll i=0;i<V.size();i++){
        if(V[i]=='x'){
            V[i]='(';
            generar(V);
            V[i]=')';
            generar(V);
            ok=false;
            break;
        }
    }
    if(ok){
        string uwu;
        for(auto x:V){
            uwu+=x;
        }
        L.pb(uwu);
    }
}
bool check(vector<char> V){
    ll c=0;
    for(ll i=0;i<V.size();i++){
        if(V[i]=='('){
            c++;
        }else{
            c--;
        }
        if(c<0){
            return false;
        }
    }
    if(c>0){
        return false;
    }
    return true;
}
vector<char> flip2(vector<char> &V,ll i,ll j){
    for(ll k=i;i<=j;i++){
        if(V[i]=='('){
            V[i]=')';
        }else{
            V[i]='(';
        }
    }
    return V;
}
vector<vector<char>> funcion2(const vector<char>& v) {
    int n = v.size();
    vector<vector<char>> resultados;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            vector<char> copia = v;
            flip2(copia, i, j);
            resultados.push_back(copia);
        }
    }
    return resultados;
}
int main(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<char> caca;
    for(auto x:s){
        caca.pb(x);
    }
    generar(caca);
    for(ll i=0;i<L.size();i++){
        vector<char> enviar;
        for(auto x:L[i]){
            enviar.pb(x);
        }
        vector<vector<char>> hate=funcion2(enviar);
        hate.pb(enviar);
        bool ok=false;
        for(auto x:hate){
            if(check(x)){
                ok=true;
            }
        }
        if(ok){
            ans++;
        }else{
            L4.pb(L[i]);
        }
    }
    cout<<ans;
}
//JURO QUE NO SE QUE ESTA MAL, LLEVO TODO EL DIA CON ESTO