#include <bits/stdc++.h>
using namespace std;
#define ll long long
set<ll> S;
vector<vector<ll>>L;
vector<vector<vector<ll>>> res;
void coso(ll inicio, int cantidad, vector<ll> actual,vector<ll> V,ll xd) {
    if (cantidad == 6) {
        res[xd].push_back(actual);
        return;
    }
    for (ll i=inicio;i<V.size();i++) {
        actual.push_back(V[i]);
        coso(i+1, cantidad + 1, actual,V,xd);
        actual.pop_back();
    }
}
int main() {
    ll n, a;
    vector<ll> V;
    while (cin >> n) {
        V.clear();
        if (n == 0) {
            V.push_back(0);
            L.push_back(V);
            break;  
        }
        S.clear();
        while (n--) {
            cin >> a;
            S.insert(a);
        }
        for(auto x:S){
            V.push_back(x);
        }
        L.push_back(V);
    }
    res.resize(L.size()-1);
    for(int i=0;i<L.size()-1;i++){
        vector<ll> actual;
        coso(0,0,actual,L[i],i);
    }
    for(int i=0;i<res.size();i++){
        for(ll j=0;j<res[i].size();j++){
            for(ll k=0;k<res[i][j].size();k++){
                cout<<res[i][j][k];
                if(k==res[i][j].size()-1){
                    i=i;
                }else{
                    cout<<" ";
                }
            }
            if(i==res.size()-1 && j==res[i].size()-1){
                i=i;
            }else{
                cout<<"\n";
            }
        }
        cout<<"\n";
    }
}
