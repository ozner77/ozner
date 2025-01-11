#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main(){
    ll t;
    cin>>t;
    ll a;
    double caca=static_cast<double>(0);
    vector<ll> V;
    for(int i=0;i<t;i++){
        cin>>a;
        V.push_back(a);
    }
    sort(V.begin(),V.end());
    ll xd=V.size();
    xd=xd/2;
    xd=V[xd];
    ll res=0;
    for(auto x:V){
        res+=abs(x-xd);
    }
    cout<<res;
}