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
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> V;
        ll x;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            if(i==0){
                x=abs(a);
            }
            if(a<0){
                V.push_back(a*-1);
            }else{
                V.push_back(a);
            }
        }
        sort(V.begin(),V.end());
        ll a;
        if(n%2==0){
            a=n/2;
        }else{
            a=n/2+1;
        }
        ll in;
        ll uwu;
        for(ll i=0;i<n;i++){
            if(V[i]==x){
                in=i+1;
                uwu=n-in;
            }
        }
        if(in<=a){
            cout<<"YES\n";
        }else{
            if(1+uwu>=a){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }
}
