#define ll long long
#define pb push_back
#define mp make_pair
#include <bits/stdc++.h>
using namespace std;
int main(){
    ll t,n,a;
    cin>>t;
    while(t--){
        vector<ll> V;
        cin>>n;
        while(n--){
            cin>>a;
            V.push_back(a);
        }
        bool no=true;
        for(int i=0;i<V.size()-1;i++){
            if(V[i]>V[i+1]){
                if(V[i]/2+1<=V[i+1]){
                    cout<<"YES\n";
                    no=false;
                    break;
                }
            }else if(V[i]==V[i+1]){
                cout<<"YES\n";
                no=false;
                break;
            }else{
                if(V[i+1]/2+1<=V[i]){
                    cout<<"YES\n";
                    no=false;
                    break;
                }
            }
        }
        if(no){
            cout<<"NO\n";
        }
    }
}