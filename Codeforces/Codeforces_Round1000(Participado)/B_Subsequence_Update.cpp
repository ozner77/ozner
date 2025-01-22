#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,l,r;
        cin>>n>>l>>r;
        vector<ll> V(n);
        for(ll i=0;i<n;i++){
            cin>>V[i];
        }
        map<l
        sort(V.begin()+l-1,V.begin()+r);
        for(int i=l-1;i<r;i++){
            cout<<V[i]<<" ";
        }
        cout<<"\n";
    }
}