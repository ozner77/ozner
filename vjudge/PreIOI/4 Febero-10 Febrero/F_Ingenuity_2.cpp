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
        string s;
        cin>>s;
        vector<char> V;
        unordered_map<char,ll> M;
        for(auto x:s){
            V.pb(x);
            M[x]++;
        }
        if((abs(M['N']-M['S'])%2==0) && (abs(M['W']-M['E'])%2==0)){
            if(s=="WE" || s=="EW" || s=="NS" || s=="SN"){
                cout<<"NO\n";
            }else{
                if(M['N']>M['S']){
                    ll c=0;
                    for(ll i=0;i<n;i++){
                        if(V[i]=='S'){
                            V[i]='R';
                        }else if(V[i]=='N' && c<(M['S']+((M['N']-M['S'])/2))){
                            V[i]='R';
                            c++;
                        }
                    }
                }else{
                    ll c=0;
                    for(ll i=0;i<n;i++){
                        if(V[i]=='N'){
                            V[i]='R';
                        }else if(V[i]=='S' && c<(M['N']+((M['S']-M['N'])/2))){
                            V[i]='R';
                            c++;
                        }
                    }
                }
                if(M['W']>M['E']){
                    ll c=0;
                    for(ll i=0;i<n;i++){
                        if(V[i]=='E'){
                            V[i]='R';
                        }else if(V[i]=='W' && c<(M['E']+((M['W']-M['E'])/2))){
                            V[i]='R';
                            c++;
                        }
                    }
                }else{
                    ll c=0;
                    for(ll i=0;i<n;i++){
                        if(V[i]=='W'){
                            V[i]='R';
                        }else if(V[i]=='E' && c<(M['W']+((M['E']-M['W'])/2))){
                            V[i]='R';
                            c++;
                        }
                    }
                }
                for(ll i=0;i<n;i++){
                    if(V[i]!='R'){
                        V[i]='H';
                    }
                }
                unordered_map<char,ll> M2;
                for(auto x:V){
                    M2[x]++;
                }
                char uwu=s[0];
                char uwu2;
                if(uwu=='S'){
                    uwu2='N';
                }
                if(uwu=='N'){
                    uwu2='S';
                }
                if(uwu=='E'){
                    uwu2='W';
                }
                if(uwu=='W'){
                    uwu2='E';
                }
                if(M2['H']==0){
                    for(ll i=0;i<n;i++){
                        if(s[i]==uwu){
                            V[i]='H';
                            break;
                        }
                    }
                    for(ll i=0;i<n;i++){
                        if(s[i]==uwu2){
                            V[i]='H';
                            break;
                        }
                    }
                }
                for(auto x:V){
                    cout<<x;
                }
                cout<<"\n";
            }
        }else{
            cout<<"NO\n";
        }
    }
}
//no criticar solucion gente