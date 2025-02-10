#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    unordered_map<ll,ll> res;
    while(t--){
        res.clear();
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        res[a+b]++;
        res[c-b]++;
        res[d-c]++;
        ll res2=0;
        for(auto x:res){
            if(x.second>res2){
                res2=x.second;
            }
        }
        cout<<res2<<"\n";
    }
}
//https://codeforces.com/contest/2060