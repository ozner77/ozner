#define ll long long
using namespace std;
#include <bits/stdc++.h>
int main(){
    ll n,m,a;
    cin>>n>>m;
    vector<ll> V;
    vector<ll> L;
    while(n--){
        cin>>a;
        V.push_back(a);
    }
    while(m--){
        cin>>a;
        L.push_back(a);
    }
    sort(V.begin(),V.end());
}