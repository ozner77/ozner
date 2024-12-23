#define ll long long
#define pb push_back
#define mp make_pair
#include <bits/stdc++.h>
using namespace std;
void fun(){

}
int main(){
    ll t;
    cin>>t;
    ll a,b,n;
    while(t--){
        vector<ll> V,V1;
        cin>>n;
        for(ll i=0;i<n;i++){
            cin>>a;
            V.push_back(a);
        }
        for(ll i=0;i<n;i++){
            cin>>b;
            V1.push_back(b);
        }
        ll res=0;
        for(ll i=0;i<n-1;i++){
            if(V[i]>V1[i+1]){
                res+=V[i]-V1[i+1];
            }
        }
        cout<<res+V[V.size()-1]<<"\n";
    }
}