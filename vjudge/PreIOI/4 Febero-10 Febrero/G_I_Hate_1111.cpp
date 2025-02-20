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
bool threedigits(string s){
    ll x=stoi(s);
    if(x%111==0){
        return true;
    }
    if(x%11==0){
        return true;
    }
    if(s[1]==s[2] && (s[1]-'0')>=(s[0]-'0')){
        return true;
    }
    ll mestoycomplicandolavida;
    for(ll i=111;i<=999;i+=111){
        mestoycomplicandolavida=x-i;
        if(mestoycomplicandolavida>=0){
            if(mestoycomplicandolavida%11==0){
                return true;
            }
        }
    }
    return false;
}
int main(){
    vl V;
    for(ll i=1000;i<=1099;i+=11){
        V.pb(i);
    }
    ll n,t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size()==2){
            if(s[0]!=s[1]){
                cout<<"NO\n";
            }else{
                cout<<"YES\n";
            }
        }else if(s.size()>=4){
            ll n=stoi(s);
            ll ok=true;
            for(auto x:V){
                if(x==n){
                    ok=false;
                    break;
                }
            }
            if(ok){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else if(s.size()==1){
            cout<<"NO\n";
        }else{
            if(threedigits(s)){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }
}
