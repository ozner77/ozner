#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        map<ll,ll> M;
        while(a--){
            ll x;
            cin>>x;
            M[x]++;
        }
        vector<ll> V;
        for(auto x:M){
            V.push_back(x.second);
        }
        ll cantidad=M.size();
        sort(V.begin(),V.end());
        ll final=V.size()-1;
        for(int i=0;i<V.size();i++){
            if(i!=final){
                if(V[i]<=b){
                    V[final]+=V[i];
                    b-=V[i];
                    cantidad--;
                    V[i]=0;
                }else{
                    break;
                }
            }else{
                break;
            }
        }
        cout<<cantidad<<"\n";
    }
}