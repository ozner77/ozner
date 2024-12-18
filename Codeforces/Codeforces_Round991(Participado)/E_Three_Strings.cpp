#define ll long long
#define pb push_back
#define mp make_pair
#include <bits/stdc++.h>
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        map<char,ll> M;
        map<char,ll> M1;
        for(auto x:a){
            M[x]++;
        }
        for(auto x:b){
            M[x]++;
        }
        for(auto x:c){
            M1[x]++;
        }
        ll res=0;
        for(auto x:M){
            char llave=x.first;
            if(x.second-M1[llave]>=0){
                res+=x.second-M1[llave];
            }
        }
        cout<<res<<"\n";
    }
}