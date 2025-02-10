#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll act;
map<ll,ll> M;
void next_mex(){
    while(M[act]!=0){
        act++;
    }
}
int main(){
    ll n,k,a;
    cin>>n>>k;
    ll n2=n;
    ll con=0;
    ll res=100000000000000000;
    vector<ll> V;
    vector<ll> xd;
    while(n--){
        cin>>a;
        V.push_back(a);
        if(con<k){
            xd.push_back(a);
        }
        con++;
    }
    sort(xd.begin(),xd.end());
    ll mex;
    ll act2=0;
    for(int i=0;i<k;i++){
        M[V[i]]++;
        if(xd[i]==act){
            act++;
        }
    }
    vector<ll> respuesta;
    respuesta.push_back(act);
    for(int i=k;i<n2;i++){
        M[act2]--;
        M[V[i]]++;
        if(V[i]==V[act2]){
            act=act;
        }else if(M[V[act2]]==0 && V[act2]<=act){
            act=V[act2];
        }else{
            next_mex();
        }
        act2++;
        respuesta.push_back(act);
    }
    for(auto x:respuesta){
        if(x<res){
            res=x;
        }
    }
    cout<<res;
}