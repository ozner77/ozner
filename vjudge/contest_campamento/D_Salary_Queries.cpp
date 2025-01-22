#include <bits/stdc++.h>
#define ll long long
using namespace std;
map<ll,ll> tree;
ll max;
void add(ll i,ll k){
    while(i<pow(10,6)){
        tree[i]=tree[i]+k;
        i+=i&-i;
    }
}
ll query(ll i){
    ll res=0;
    while(i>0){
        res+=tree[i];
        i-=i&-i;
    }
    return res;
}
int main(){
    ll n,q;
    vector<ll> V;
    cin>>n>>q;
    while(n--){
        ll a;
        cin>>a;
        V.push_back(a);
    }
    for(auto x:V){
        add(x,1);
    }
    while(q--){
        char c;
        ll a,b;
        cin>>c>>a>>b;
        if(c=='!'){
            add(V[a-1],-1);
            V[a-1]=b;
            add(b,1);
        }else{
            ll x=query(a-1);
            ll y=query(b);
            cout<<y-x<<"\n";
        }
    }
}