#define ll long long
#define pb push_back
#define mp make_pair
#include <bits/stdc++.h>
using namespace std;
int main(){
    ll t,n,d;
    cin>>t;
    while(t--){
        cin>>n>>d;
        cout<<"1 ";
        if(d==3 || d==6 || d==9 || n>=3){
            cout<<"3 ";
        }
        if(d==5){
            cout<<"5 ";
        }
        if(d==7){
            cout<<"7 ";
        }
        cout<<"\n";
    }
}