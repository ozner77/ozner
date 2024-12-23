#define ll long long
#define pb push_back
#define mp make_pair
#include <bits/stdc++.h>
using namespace std;
void fun(){

}
int main(){
    ll t;
    cin>>t;
    ll a,b,n,c;
    while(t--){
        cin>>n>>a>>b>>c;
        ll caca=a+b+c;
        ll res=(n/caca);
        if(n%caca==0){
            res--;
        }
        ll res2=res;
        res2++;
        res2=res2*3;
        res++;
        res=res*caca;
        if(res>=n){
            res-=c;
            if(res>=n){
                res2--;
                res-=b;
                if(res>=n){
                    res2--;
                    res-=a;
                    if(res>=n){
                        a=a;
                    }else{
                        cout<<res2<<"\n";
                    }
                }else{
                    cout<<res2<<"\n";
                }
            }else{
                cout<<res2<<"\n";
            }
        }
    }
}