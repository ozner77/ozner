#define ll long long
#define pb push_back
#define mp make_pair
#include <bits/stdc++.h>
using namespace std;
string s;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        ll a;
        ll sum1=0;
        ll sum2=0;
        ll con=0;
        cin>>n;
        ll aux=n;
        while(n--){
            cin>>a;
            if(con%2==0){
                sum1+=a;
            }else{
                sum2+=a;
            }
            con++;
        }
        if(aux%2==0){
                if(sum1%(aux/2)==0 && sum2/(aux/2)==sum1/(aux/2) && sum2%(aux/2)==0){
                    cout<<"YES\n";
                }else{
                    cout<<"NO\n";
                }
            }else{
                if(sum1%((aux/2)+1)==0 && sum1/((aux/2)+1)==sum2/(aux/2) && sum2%(aux/2)==0){
                    cout<<"YES\n";
                }else{
                    cout<<"NO\n";
                }
            }
    }
}
