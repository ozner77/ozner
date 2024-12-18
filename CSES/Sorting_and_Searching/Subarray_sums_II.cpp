#define ll long long
#define pb push_back
#define mp make_pair
#include <bits/stdc++.h>
using namespace std;
ll n,x,a;
int main(){
    cin>>n>>x;
    vector<ll> V;
    while(n--){
        cin>>a;
        V.push_back(a);
    }
    vector<ll> pV;
    pV.push_back(V[0]);
    for(int i=1;i<V.size();i++){
        pV.push_back(V[i]+pV[i-1]);
    }
    map<ll,ll> M;
    ll res=0;
    for(long long i=0;i<pV.size();i++){
        if(M[pV[i]-x]>0){
            res+=M[pV[i]-x];
        }
        if(pV[i]==x){
            res++;
        }
        M[pV[i]]++;
    }
    cout<<res;
}