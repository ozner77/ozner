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
    vector<ll> primes(10001,1);
    primes[1]=0;
    primes[0]=0;
    for (ll i = 2; i < 1001; i++) {
        if (primes[i]==1){
            for (ll j = i; j < 1001; j += i) {
                if(primes[j]==1){
                    primes[j]=i;
                }
            }
        }
    }
    ll t;
    cin>>t;
    unordered_map<ll,ll> M;
    while(t--){
        ll n;
        cin>>n;
        unordered_set<ll> s;
        vl res;
        for(int i=0;i<n;i++){
            ll a;
            cin>>a;
            res.pb(primes[a]);
            s.insert(primes[a]);
        }
        cout<<s.size()<<"\n";
        ll color=1;
        for(auto x:s){
            M[x]=color;
            color++;
        }
        for(auto x:res){
            cout<<M[x]<<" ";
        }
        cout<<"\n";
    }
}
//plantillita