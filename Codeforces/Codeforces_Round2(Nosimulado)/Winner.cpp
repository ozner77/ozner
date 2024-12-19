#define ll long long
#define pb push_back
#define mp make_pair
#include <bits/stdc++.h>
using namespace std;
int main(){
    ll t,maxi=0,n;
    string s,maximito;
    map<string,ll> M;
    map<string,ll> M1;
    map<string,ll> M2;
    vector<string> V;
    vector<ll> V1;
    cin>>t;
    while(t--){
        cin>>s;
        cin>>n;
        M[s]+=n;
        V.push_back(s);
        V1.push_back(n);
    }
    for(auto x:M){
        ll segundo=x.second;
        if(segundo>maxi){
            maxi=segundo;
        }
    }
    for(auto x:M){
        if(x.second==maxi){
            M2[x.first]++;
        }
    }
    for(int i=0;i<V.size();i++){
        if(M1[V[i]]>=maxi){
            if(M2[V[i]]>0){
                cout<<V[i];
                break;
            }
        }
        M1[V[i]]+=V1[i];
        if(M1[V[i]]>=maxi){
            if(M2[V[i]]>0){
                cout<<V[i];
                break;
            }
        }
    } 
}
//me re compliqué xdddd