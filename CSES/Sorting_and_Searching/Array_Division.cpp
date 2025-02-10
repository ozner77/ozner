#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool f(vector<ll> V,ll divisiones_restantes,ll objetivo){
    ll suma=0;
    for(ll i=0;i<V.size();i++){
        suma+=V[i];
        if(suma>objetivo){
            divisiones_restantes--;
            if(V[i]<=objetivo){
                suma=V[i];
            }else{
                return false;
            }
        }
        if(divisiones_restantes<0){
            return false;
        }
    }
    return true;
}
int main(){
    ll n,k,a;
    cin>>n>>k;
    ll l,r,m;
    l=0;
    r=100000000000000001;
    vector<ll> V;
    for(int i=0;i<n;i++){
        cin>>a;
        V.push_back(a);
    }
    while(l<r){
        m=(l+r)/2;
        if(f(V,k-1,m)){
            r=m;
        }else{
            l=m+1;
        }
    }
    cout<<l;
}