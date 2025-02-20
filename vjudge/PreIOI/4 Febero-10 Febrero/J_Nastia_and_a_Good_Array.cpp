//1,000,000,003
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
ll uwu=1000000007;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vl V;
        ll min=uwu;
        ll indexmin;
        ll c=0;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            if(a<min){
                min=a;
                indexmin=i;
            }
            V.pb(a);
        }
        
        if(indexmin%2==0){
            cout<<n/2<<"\n";
            for(ll i=1;i<n;i+=2){
                cout<<indexmin+1<<" "<<i+1<<" "<<min<<" "<<uwu;
                cout<<"\n";
                V[i]=uwu;
                V[indexmin]=min;
            }
        }else{
            if(n%2==0){
                cout<<n/2<<"\n";
            }else{
                cout<<n/2+1<<"\n";
            }
            for(ll i=0;i<n;i+=2){
                cout<<indexmin+1<<" "<<i+1<<" "<<min<<" "<<uwu;
                cout<<"\n";
                V[i]=uwu;
                V[indexmin]=min;
            }
        }
        /*for(ll i=1;i<n;i++){
            if(gcd(V[i],V[i-1])!=1){
                cout<<"NO";
                cout<<V[i-1]<<" ";
            }
        }*/
    }
}
//1000000003 no era primo :v, chatgpt me dijo que si era, IA de mrddd yo buscando el error :(
