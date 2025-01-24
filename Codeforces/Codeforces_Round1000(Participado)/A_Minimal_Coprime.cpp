#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    ll a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a==1 && b==1){
            cout<<1<<"\n";
        }else{
            cout<<abs(a-b)<<"\n";
        }
    }
}