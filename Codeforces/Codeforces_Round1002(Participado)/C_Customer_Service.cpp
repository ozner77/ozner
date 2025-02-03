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
ll mex(vl V){
    set<ll> s;
    s.clear();
    for(auto x:V){
        cout<<x<<" ";
        s.insert(x);
    }
    cout<<"\n";
    ll con=0;
    for(auto x:s){
        if(x!=con){
            return con;
        }
        con++;
    }
    return con;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vvl V;
        vl L;
        for(int i=0;i<n;i++){
            for(int i=0;i<n;i++){
                ll a;
                cin>>a;
                L.pb(a);
            }
            V.pb(L);
        }
        vl U(n,0);
        ll res=0;
        for(int time=0;time<n;time++){
            for(int i=1;i<n;i++){
                U[i]+=V[i][time];
            }
            res=max(res,mex(U));
        }
        cout<<res<<"\n";
    }
}
//plantillita