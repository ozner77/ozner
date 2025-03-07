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
        ll n,k;
        cin>>n>>k;
        vl V;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            V.pb(a);
        }
        if(k==1){
            cout<<"YES\n";
        }else if(k==2){
            vpll L;
            ll con=1;
            for(ll i=1;i<n;i++){
                if(V[i]==V[i-1]){
                    con++;
                }else{
                    L.pb(mp(V[i-1],con));
                    con=1;
                }
            }
            L.pb(mp(V[V.size()-1],con));
            if(L.size()%2!=0 && L.size()>2){
                cout<<"NO\n";
            }else{
                bool ok=true;
                for(ll i=2;i<L.size();i++){
                    if(L[i-2]!=L[i]){
                        ok=false;
                        break;
                    }
                }
                if(ok){
                    cout<<"YES\n";
                }else{
                    cout<<"NO\n";
                }
            }
        }else{
            bool ok1=true;
            bool ok2=true;
            bool ok3=true;
            vpll L;
            ll con=1;
            for(ll i=1;i<n;i++){
                if(V[i]==V[i-1]){
                    con++;
                }else{
                    L.pb(mp(V[i-1],con));
                    con=1;
                }
            }
            L.pb(mp(V[V.size()-1],con));
            
            //ok1
            if(L.size()%2!=0 && L.size()>2){
                ok1=false;
            }else{
                for(ll i=2;i<L.size();i++){
                    if(L[i-2]!=L[i]){
                        ok1=false;
                        break;
                    }
                }
            }

            //ok2
            vpll L1;
            vector<vpll> hate;
            ll nope1=V[0];
            for(auto x:L){
                if(x.f!=nope1){
                    L1.pb(x);
                }else{
                    bool ok10000=true;
                    if(L1.size()%2!=0 && L1.size()>2){
                        ok10000=false;
                    }else{
                        for(ll i=2;i<L1.size();i++){
                            if(L1[i-2]!=L1[i]){
                                ok10000=false;
                                break;
                            }
                        }
                    }
                    if(ok10000){
                        if(!L1.empty()){
                            hate.pb(L1);
                        }
                    }else{
                        ok2=false;
                        break;
                    }
                    L1.clear();
                }
            }
            
            bool ok10000=true;
            if(L1.size()%2!=0 && L1.size()>2){
                ok10000=false;
            }else{
                for(ll i=2;i<L1.size();i++){
                    if(L1[i-2]!=L1[i]){
                        ok10000=false;
                        break;
                    }
                }
            }
            if(ok10000){
                if(!L1.empty()){
                    hate.pb(L1);
                }
            }else{
                ok2=false;
                break;
            }
            L1.clear();

            for(ll i=1;i<hate.size();i++){
                if(hate[i]!=hate[i-1]){
                    ok2=false;
                    break;
                }
            }

            //ok3
            vpll L2;
            vector<vpll> odio;
            ll nope2=6-L[0].f-L[1].f;
            for(auto x:L){
                if(x.f!=nope2){
                    L2.pb(x);
                }else{
                    bool ok10001=true;
                    if(L2.size()%2!=0 && L2.size()>2){
                        ok10001=false;
                    }else{
                        for(ll i=2;i<L2.size();i++){
                            if(L2[i-2]!=L2[i]){
                                ok10001=false;
                                break;
                            }
                        }
                    }
                    if(ok10001){
                        if(!L2.empty()){
                            odio.pb(L2);
                        }
                    }else{
                        ok3=false;
                        break;
                    }
                    L2.clear();
                }
            }

            ok10000=true;
            if(L2.size()%2!=0 && L2.size()>2){
                ok10000=false;
            }else{
                for(ll i=2;i<L2.size();i++){
                    if(L2[i-2]!=L2[i]){
                        ok10000=false;
                        break;
                    }
                }
            }
            if(ok10000){
                if(!L2.empty()){
                    odio.pb(L2);
                }
            }else{
                ok3=false;
                break;
            }
            L2.clear();

            for(ll i=1;i<odio.size();i++){
                if(odio[i]!=odio[i-1]){
                    ok3=false;
                    break;
                }
            }

            for(ll i=1;i<odio.size();i++){
                if(odio[i]!=odio[i-1]){
                    ok3=false;
                    break;
                }
            }

            //ok?
            if(ok1 || ok2 || ok3){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }
}