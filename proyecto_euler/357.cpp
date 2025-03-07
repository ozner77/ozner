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
vector<ll> obtenerDivisores(const vector<ll>& divs) {
    vector<ll> divisores;
    divisores.push_back(1);  // El 1 es siempre un divisor

    // Recorremos cada primo y generamos todos los divisores posibles
    for (int p : divs) {
        int n = divisores.size();
        for (int i = 0; i < n; ++i) {
            int nuevo_divisor = divisores[i] * p;
            divisores.push_back(nuevo_divisor);
        }
    }
    
    return divisores;
}
int main(){
    ll n;
    cin>>n;
    n++;
    vl prime1;
    vl prime2(n+1,0);
    prime2[0]=0;
    prime2[1]=1;
    for(ll i=2;i<=n;i++){
        if(prime2[i]==0){
            prime1.pb(i);
            prime2[i]=i;
            for(ll j=i*i;j<=n;j+=i){
                prime2[j]=i;
            }
        }
    }
    ll res=0;
    for(ll i=1;i<prime1.size();i++){
        vl divs;
        divs.clear();
        ll div=prime1[i]-1;
        while(div!=1){
            divs.pb(prime2[div]);
            div=div/prime2[div];
        }
        vl real=obtenerDivisores(divs);

        div=prime1[i]-1;
        bool ok=true;
        for(auto x:real){
            if(prime2[div/x+x]!=div/x+x){
                ok=false;
            }
        }
        if(ok){
            res+=div;
        }
    }
    cout<<res+1;
    //falta 1
}
