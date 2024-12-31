#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,x,a;
    cin>>n>>x;
    ll jaja=n;
    vector<ll> V;
    while(n--){
        cin>>a;
        V.push_back(a);
    }
    sort(V.rbegin(),V.rend());
    ll final=V.size()-1;
    ll xd=0;
    ll res=0;
    vector<bool> visitado(jaja,false);
    for(ll i=0;i<V.size();i++){
        if(i<final-xd){
            if(V[i]+V[final-xd]<=x){
                if(!visitado[i] && !visitado[final-xd]){
                visitado[i]=true;
                visitado[final-xd]=true;
                xd++;
                res++;
                }
            }else{
                if(!visitado[i]){
                    visitado[i]=true;
                    res++;
                }
            }
        }else{
            if(!visitado[i]){
                visitado[i]=true;
                res++;
            }
        }
    }
    cout<<res;
}