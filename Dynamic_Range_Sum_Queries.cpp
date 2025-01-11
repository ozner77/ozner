#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,q;
    vector<ll> V;
    cin>>n>>q;
    while(n--){
        ll a;
        cin>>a;
        V.push_back(a);
    }
    vector<ll> tree;
    for(auto x:V){
        tree.push_back(x);
    }
    for(int i=1;i<tree.size()+1;i++){
        ll p=i+(i&-i);
        if(p<tree.size()+1){
            tree[p-1]=tree[p-1]+tree[i-1];
        }
    }
    while(q--){
        ll x,y,z;
        cin>>x>>y>>z;
        if(x==1){
            ll caca=V[y-1];
            V[y-1]=z;
            z=z-caca;
            while(y<tree.size()+1){
                tree[y-1]=tree[y-1]+z;
                y+=y&-y;
            }
        }else{
            ll res=0;
            ll res2=0;
            y--;
            while(y>0){
                res+=tree[y-1];
                y-=y&-y;
            }
            while(z>0){
                res2+=tree[z-1];
                z-=z&-z;
            }
            cout<<res2-res<<"\n";
        }
    }
}