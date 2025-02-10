#define ll long long
#define pb push_back()
#include <bits/stdc++.h>
using namespace std;
int main(){
    ll t,n;
    cin>>n>>t;
    ll a;
    vector<ll> V;
    while(n--){
        cin>>a;
        V.push_back(a);
    }
    ll r,l,m;
    l=0;
    r=2000000000000000001;
    ll res;
    bool com=false;
    while(r>l){
        m=(r+l)/2;
        long long suma=0;
        ll suma2=0;
        for(auto x:V){
            if(suma>t){
                break;
            }
            suma=suma+m/x;
            if(m!=0){
                suma2+=(m-1)/x;
            }
        }
        if(suma==t){
            if(suma2!=suma){
                com=true;
                break;
            }else if(m==0){
                com=true;
                break;
            }else{
                r=m;
            }
        }else if(suma>t){
            r=m;
        }else{
            l=m+1;
        }
    }
    m=(l+r)/2;
    cout<<m;
}