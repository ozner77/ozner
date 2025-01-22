#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll res=max(a,b);
        res++;
        cout<<res<<"\n";
    }
}