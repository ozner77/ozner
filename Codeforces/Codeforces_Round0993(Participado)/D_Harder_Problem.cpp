#define ll long long
#define pb push_back
#define mp make_pair
#include <bits/stdc++.h>
using namespace std;
int main(){
    ll t,a,n;
    cin>>t;
    while(t--){
        cin>>n;
        map<ll,ll> M;
        for(int i=1;i<10;i++){
            M[i]=0;
        }
        vector<ll> V;
        ll left=45;
        ll vuelta=0;
        while(n--){
            cin>>a;
            if(M[a]>vuelta){
                if(left>0){
                for(auto x:M){
                    if(x.second<=vuelta){
                        M[x.first]++;
                        V.push_back(x.first);
                        left=left-x.first;
                        break;
                    }
                }
                }else{
                    vuelta++;
                    left=45;
                    V.push_back(a);
                    M[a]++;
                    left=left-a;
                }
            }else{
                if(left>0){
                    left=left-a;
                    M[a]++;
                    V.push_back(a);
                }
            }
        }
        for(auto x:V){
            cout<<x<<" ";
        }
        cout<<"\n";
    }
}
//me fue de la vrg