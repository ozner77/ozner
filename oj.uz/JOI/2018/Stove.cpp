#define ll long long
#define pb push_back
#include <bits/stdc++.h>
using namespace std;
int main(){
    ll a,b,c,ant;
    cin>>a>>b;
    ll res=a;
    vector<ll> V;
    if(b<a){
        ll con=0;
        while(a--){
        cin>>c;
        if(con>0){
            V.push_back(c-ant);
        }
        con++;
        ant=c;
        }
        sort(V.begin(),V.end());
        ll xd=res-b;
        for(int i=0;i<xd;i++){
            res--;
            res+=V[i];
        }
        cout<<res;
    }else{
        while(a--){
        cin>>c;
        }
        cout<<res;
    }
}
