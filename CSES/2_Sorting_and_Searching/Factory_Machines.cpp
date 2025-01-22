#define ll long long
#define pb push_back()
#include <bits/stdc++.h>
using namespace std;
bool f(ll x,vector<ll> V,ll m){
    ll suma=0;
    for(auto y:V){
        suma=suma+(x/y);
        if(suma>=m){
            return true;
        }
    }
    if(suma>=m){
        return true;
    }else{
        return false;
    }
}
int main(){
    ll n,m;
    cin>>n>>m;
    vector<ll> V;
    for(int i=0;i<n;i++){
        ll a;
        cin>>a;
        V.push_back(a);
    }
    ll l,r,med;
    l=0;
    r=2000000000000000001;
    while(l<r){
        med=(l+r)/2;
        if(f(med,V,m)){
            r=med;
        }else{
            l=med+1;
        }
    }
    cout<<r;
}