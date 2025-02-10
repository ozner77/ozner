#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    vector<ll> V;
    ll n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            V.push_back(i*j);
        }
    }
    sort(V.begin(),V.end());
    ll res=V.size()/2;
    res=V[res];
    cout<<res;
}