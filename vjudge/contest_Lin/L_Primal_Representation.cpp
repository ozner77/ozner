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
    vector<ll>V(100001,1);
    V[0]=0;
    V[1]=1;
    for(ll i=2;i<1000;i++){
        if(V[i]==1){
            for(ll j=i*i;j<100001;j+=i){
                V[j]=0;
            }
        }
    }
    vector<ll> prime;
    for(ll i=2;i<V.size();i++){
        if(V[i]==1){
            prime.pb(i);
        }
    }
    ll n;
    while(cin>>n){
        set<ll> res;
        unordered_map<ll,ll> count;
        if(n<0){
            res.insert(-1);
            n=abs(n);
        }
        ll con=0;
        while(n!=1){
            if(n%prime[con]==0){
                res.insert(prime[con]);
                count[prime[con]]++;
                n=n/prime[con];
            }else{
                con++;
            }
            if(con==prime.size()){
                res.insert(n);
                break;
            }
        }
        for(auto x:res){
            if(count[x]>1){
                cout<<x<<"^"<<count[x]<<" ";
            }else{
                cout<<x<<" ";
            }
        }
        cout<<"\n";
    }
}
//plantillita