#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    vector<ll> V;
    while(t--){
        ll a;
        cin>>a;
        V.push_back(a);
    }
    sort(V.begin(),V.end());
    ll res=0;
    for(int i=0;i<V.size();i++){
        if(V[i]>res+1){
            break;
        }else{
            res+=V[i];
        }
    }
    cout<<res+1;
}