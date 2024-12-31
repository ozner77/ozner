#define ll long long
#define pb push_back
#define mp make_pair
#include <bits/stdc++.h>
using namespace std;

int main(){
    ll t,a;
    cin>>t;
    vector<ll> V;
    vector<ll> pV;
    while(t--){
        cin>>a;
        V.push_back(a);
    }
    pV.push_back(0);
    pV.push_back(V[0]);
    for(int i=1;i<V.size();i++){
        pV.push_back(V[i]+pV[i]);
    }
    ll minimo=pV[0];
    ll maximo=pV[1];
    for(int i=1;i<pV.size();i++){
        maximo=max(maximo,pV[i]-minimo);
        minimo=min(minimo,pV[i]);
    }
    cout<<maximo;
}