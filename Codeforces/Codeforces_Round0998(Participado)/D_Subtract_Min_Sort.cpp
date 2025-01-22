#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        ll n1=n;
        vector<ll> V;
        while(n--){
            ll a;
            cin>>a;
            V.push_back(a);
        }
        bool valid=true;
        for(int i=1; i<V.size(); i++){
            if(V[i]<V[i-1]){
                valid=false;
                break;
            }else{
                V[i]=V[i]-V[i-1];
            }
        }
        if(valid){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}