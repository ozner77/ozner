#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main(){
    ll n,m,a;
    while(true){
        cin>>n>>m;
        if(n==0 && m==0){
            break;
        }
        map<ll,ll> M;
        ll res=0;
        while(n--){
            cin>>a;
            M[a]++;
        }
        while(m--){
            cin>>a;
            if(M[a]>0){
                res++;
            }
        }
        cout<<res<<"\n";
    }
}