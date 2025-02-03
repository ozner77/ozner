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
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        k=n-k;
        vector<ll> V;
        for(int i=0;i<n;i++){
            ll a;
            cin>>a;
            V.pb(a);
        }
        if(k==0){
            ll con=1;
            bool com=true;
            for(int i=1;i<n;i+=2){
                if(V[i]!=con){
                    cout<<con<<"\n";
                    com=false;
                    break;
                }
                con++;
            }
            if(com){
                cout<<con<<"\n";
            }
        }else if(k==n-1){
            ll con=1;
            bool com=true;
            for(int i=0;i<n;i++){
                if(V[i]!=con){
                    cout<<con<<"\n";
                    com=false;
                    break;
                }
                con++;
            }
            if(com){
                cout<<con<<"\n";
            }
        }else{
            k++;
            ll con=0;
            for(int i=0;i<n;i++){
                if(V[i]==1){
                    con++;
                }else{
                    break;
                }
            }
            if(con<=k){
                if(con==0){
                    k--;
                    if(V[1]==1){
                        for(int i=1;i<n;i++){
                            if(V[i]==1){
                                con++;
                            }else{
                                break;
                            }
                        }
                        if(con<=k){
                            cout<<1<<"\n";
                        }else{
                            cout<<2<<"\n";
                        }
                    }else{
                        cout<<1<<"\n";
                    }
                }else{
                    cout<<1<<"\n";
                }
            }else{
                cout<<2<<"\n";
            }
        }
    }
}
//plantillita