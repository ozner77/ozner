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
vector<ll> res;
void exp1(ll a,vector<ll> V,ll time){
    while(true){

    }
}
void exp2(ll a,vector<ll> V,ll time){
    while(true){
        if(res[a]!=0){
            return;
        }
    }
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,p;
        cin>>n,p;
        vector<ll> V;
        vector<pll> L;
        ll con=0;
        for(int i=0;i<n;i++){
            ll a;
            cin>>a;
            if(a==0){
                L.pb(mp(a,a));
                con++;
            }
            V.pb(a);
        }
        res.assign(n,0);
        ll time=0;
        while(con!=0){
            for(auto x:L){
                exp1(x.f,V,time);
                exp2(x.s,V,time);
            }
        }
    }
}
//plantillita