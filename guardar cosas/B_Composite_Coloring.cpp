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
vector<int> getPrimes() {
    vector<int> primes;
    vector<bool> is_prime(1001, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= 1000; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j <= 1000; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return primes;
}
vector<ll> divs(ll n,vector<int> criba){
    vector<ll> ans;
    for(auto x:criba){
        if(x>n){
            break;
        }
        if(n%x==0){
            ans.pb(x);
        }
    }
    return ans;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> V;
        for(int i=0;i<n;i++){
            ll a;
            cin>>a;
            V.pb(a); 
        }
        vector<int> criba=getPrimes();
        ll color=1;
        vector<ll> ans(n);
        vector<vector<ll>> L;
        for(auto x:V){
            L.push_back(divs(x,criba));
        }
        while(!V.empty()){
             
        }
    }
}
//plantillita