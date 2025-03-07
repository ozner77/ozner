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
    ll n;
    cin>>n;
    umll M;
    vl P(n+2);
    P[0]=0;
    vl V(n+1);
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        M[a]++;
    }
    for(ll i=0;i<=n;i++){
        if(M[i]==0){
            V[i]=1;
        }
    }
    for(ll i=1;i<=n+1;i++){
        P[i]=P[i-1]+V[i-1];
    }
    for(ll i=0;i<=n;i++){
        cout<<max(M[i],P[i])<<"\n";
    }
}
//los problem 2 siempre son tan fáciles?