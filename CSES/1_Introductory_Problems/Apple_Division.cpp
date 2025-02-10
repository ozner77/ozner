#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> apples;
ll solve(ll i,ll sum1,ll sum2){
    if(i==apples.size()){
        return abs(sum1-sum2);
    }
    return min(solve(i+1,sum1+apples[i],sum2),solve(i+1,sum1,sum2+apples[i]));
}
int main() {
    ll n;
    cin >> n;
    apples.resize(n);
    for (ll i = 0; i < n; ++i) {
        cin >> apples[i];
    }
    ll res=solve(0,0,0);
    cout<<res;
}
