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
unordered_map<ll, ll> M;
ll caca(ll x) {
    if (x==1){
        return 1;
    }
    if (M[x]!=0){
        return M[x];
    }
    ll res;
    if (x%2==0) {
        res=2*caca(x/2);
    } else {
        ll a=caca(x/2);
        ll b=caca(x/2+1);
        res=a-3*b;
    }
    M[x]=res;
    return res;
}
int main() {
    ll x=1e12;
    cout<<-(caca(1+((x-2)/2)))+4;
    //solo funciona cuando x es par
}
