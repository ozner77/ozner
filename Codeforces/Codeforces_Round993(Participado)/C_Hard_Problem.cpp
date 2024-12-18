#define ll long long
#define pb push_back
#define mp make_pair
#include <bits/stdc++.h>
using namespace std;
void fun(){

}
int main(){
    ll t,a,b,c,m;
    cin>>t;
    while(t--){
        cin>>m>>a>>b>>c;
        ll left1=m;
        ll left2=m;
        if(a>=left1){
            left1=0;
        }else{
            left1=left1-a;
        }
        if(b>=left2){
            left2=0;
        }else{
            left2=left2-b;
        }
        if(c>=left1){
            c=c-left1;
            left1=0;
        }else{
            left1=left1-c;
            c=0;
        }
        if(c>=left2){
            left2=0;
        }else{
            left2=left2-c;
        }
        ll res=left2+left1;
        ll res2=2*m;
        res2=res2-res;
        cout<<res2<<"\n";
    }
}