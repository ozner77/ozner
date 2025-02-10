#define ll long long
#define pb push_back
#define mp make_pair
#include <bits/stdc++.h>
using namespace std;
ll suerte;
ll k;
ll respuesta;
ll lanterior;
ll multiplicador=1;
void luck(ll l,ll r){
    if(r-l+1<k){
        k=k;
        respuesta=lanterior;
    }else{
    ll m=(l+r)/2;
    if((r-l)%2==0){
        multiplicador=2;
        lanterior=m;
        luck(m+1,r);
    }else{
        multiplicador=1;
        lanterior=m+1;
        luck(m+1,r);
    }
    }
}
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n>>k;
        suerte=0;
        luck(1,n);
        for(ll i=respuesta;i>0;i-=(n-respuesta)*multiplicador+1){
            suerte+=i;

        }
        cout<<suerte<<"\n";
    }
}