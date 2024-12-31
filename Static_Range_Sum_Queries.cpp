#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main(){
    ll n,q,a,x,y;
    cin>>n>>q;
    vector<ll> V;
    vector<ll> pV;
    while(n--){
        cin>>a;
        V.push_back(a);
    }
    pV.push_back(0);
    pV.push_back(V[0]);
    for(int i=1;i<V.size();i++){
        pV.push_back(V[i]+pV[i]);
    }
    while(q--){
        cin>>x>>y;
        ll res=pV[y]-pV[x-1];
        cout<<res<<"\n";
    }
}