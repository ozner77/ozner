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
    umll M;
    vl V;
    vl L;
    L.pb(0);
    ll n;
    cin>>n;
    for(int i=0;i<n;i++){
        ll a;
        cin>>a;
        V.pb(a);
    }
    for(int i=0;i<n;i++){
        ll b;
        cin>>b;
        M[b]=V[i];
        L.pb(b);
    }
    for(int i=1;i<=n;i++){
        cout<<L[M[i]]<<" ";
    }
}
