#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> V,T;
ll n;
void build(ll i,ll tl,ll tr){
    if(tl==tr){
        T[i]=V[tl];
        return;
    }
    ll tm=(tl+tr)/2;
    build(2*i+1,tl,tm);
    build(2*i+2,tm+1,tr);
    T[i]=min(T[2*i+1],T[2*i+2]);
}
int q(ll i,ll tl,ll tr,ll a,ll b){
    if(tl>b || tr<a){
        return 1e9;
    }
    if(tl>=a && tr<=b){
        return T[i];
    }
    ll tm=(tl+tr)/2;
    return min(q(2*i+1,tl,tm,a,b),q(2*i+2,tm+1,tr,a,b));
}
int query(ll a,ll b){
    return q(0,0,n-1,a,b);
}
void u(ll i,ll tl,ll tr,ll a,ll b){
    if(tl==tr){
        T[i]=b;
    }
    ll tm=(tl+tr)/2;
    if(a<=tm){
        u(2*i+1,tl,tm,a,b);
    }else{
        u(2*i+2,tm+1,tr,a,b);
    }
    T[i]=min(T[2*i+1],T[2*i+2]);
}
void update(ll a,ll b){
    u(0,0,n-1,a,b);
}
int main(){
    ll m;
    cin>>n>>m;
    T.resize(4*n);
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        V.push_back(a);
    }
    build(0,0,n-1);
    for(ll i=0;i<m;i++){
        ll a,b,c;
        cin>>a>>b;
        a--;
        b--;
        cout<<query(a,b)<<"\n";
    }
}