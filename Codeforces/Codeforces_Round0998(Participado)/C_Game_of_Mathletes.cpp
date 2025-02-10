#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin>>n>>k;
        ll n1=n;
        set<ll>V;
        map<ll,ll> M;
        while(n--){
            ll a;
            cin>>a;
            V.insert(a);
            M[a]++;
        }
        ll res=0;
        for(auto x:V){
            ll uwu=min(M[x],M[k-x]);
            if(x==k-x){
                uwu/=2;
            }
            M[x]=0;
            M[k-x]=0;
            res+=uwu;
        }
        cout<<res<<"\n";
    }
}