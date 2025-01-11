#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main(){
    ll t;
    cin>>t;
    map<ll,ll> M;
    for(int i=0;i<1000;i++){
        M[i*i]++;
    }
    while(t--){
        ll n;
        cin>>n;
        vector<ll>V(n,0);
        ll con=1;
        while(true){
            bool com=true;
            for(int i=0;i<V.size();i++){
                if(M[con+V[i]]==1){
                    V[i]=con;
                    com=false;
                    break;
                }else if(V[i]==0){
                    V[i]=con;
                    com=false;
                    break;
                }
            }
            if(com){
                break;
            }
            con++;
        }
        cout<<con-1<<"\n";
    }
}