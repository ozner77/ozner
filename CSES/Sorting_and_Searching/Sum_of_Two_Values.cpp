#define ll long long
#define pb push_back
#define mp make_pair
#include <bits/stdc++.h>
using namespace std;

int main(){
    ll n,x,a;
    cin>>n>>x;
    vector<ll> V;
    map<ll,ll> M;
    while(n--){
        cin>>a;
        M[a]++;
        V.push_back(a);
    }
    bool com=true;
    for(int i=0;i<V.size();i++){
        M[V[i]]--;
        if(M[x-V[i]]>0){
            for(int j=0;j<V.size();j++){
                if(j!=i){
                    if(V[j]==x-V[i]){
                        cout<<i+1<<" "<<j+1;
                        break;
                    }
                }
            }
            com=false;
            break;
        }
        M[V[i]]++;
    }
    if(com){
        cout<<"IMPOSSIBLE";
    }
}