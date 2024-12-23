#define ll long long
#define pb push_back
#define mp make_pair
#include <bits/stdc++.h>
using namespace std;
int main(){
    ll t;
    cin>>t;
    ll a,b,c,n,m,k;
    while(t--){
        vector<ll> M,K;
        cin>>n>>m>>k;
        while(m--){
            cin>>a;
            M.push_back(a);   
        }
        ll kaka=0;
        for(int i=0;i<k;i++){
            cin>>b;
            kaka+=b;
        }
        ll xd=n*(n+1);
        xd=xd/2;
        xd=xd-kaka;
        for(auto x:M){
            if(k==n){
                cout<<"1";
            }else if(k<n-1){
                cout<<"0";
            }else{
                if(x==xd){
                    cout<<"1";
                }else{
                    cout<<"0";
                }
            }
        }
        cout<<"\n";
    }
}