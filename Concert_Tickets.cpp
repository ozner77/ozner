#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main(){
    ll n,m,a,b;
    cin>>n>>m;
    vector<ll> V;
    vector<pair<ll,ll>> L;
    while(n--){
        cin>>a;
        V.push_back(a);
    }
    for(int i=0;i<m;i++){
        cin>>b;
        L.push_back(make_pair(b,i));
    }
    sort(V.begin(),V.end());
    sort(L.begin(),L.end());
    vector<ll> respuesta(m);
    ll num_ticket=0;
    ll max_ticket=V.size();
    for(int i=0;i<L.size();i++){
        if(num_ticket==max_ticket){
            break;
        }
        if(L[i].first>=V[num_ticket]){
            respuesta[L[i].second]=V[num_ticket];
            num_ticket++;
        }else{
            respuesta[L[i].second]=-1;
        }
    }
    for(auto x:respuesta){
        cout<<x<<"\n";
    }
}