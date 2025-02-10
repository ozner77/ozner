#define ll long long
#define pb push_back
#define mp make_pair
#include <bits/stdc++.h>
using namespace std;
int main(){
    ll t,n,a,b;
    cin>>t;
    while(t--){
        string res="";
        vector<ll> L;
        vector<ll> R;
        map<ll,ll> M;
        vector<ll> V;
        cin>>n;
        vector<ll> V2((2*n)+1,0);
        while(n--){
            cin>>a;
            cin>>b;
            a--;
            b--;
            L.push_back(a);
            R.push_back(b);
            if(a==b){
                M[a]++;
                V2[a]=1;
            }
        }
        vector<ll> pV;
        pV.push_back(V2[0]);
        for(int i=1;i<V2.size();i++){
            pV.push_back(V2[i]+pV[i-1]);
        }
        for(int i=0;i<L.size();i++){
            bool cero=true;
            if(L[i]==R[i]){
                if(M[L[i]]>1){
                    res+="0";
                    continue;
                }else{
                    res+="1";
                    continue;
                }
            }else{
                ll xd;
                if(L[i]==0){
                    xd=pV[R[i]];
                }else{
                    xd=pV[R[i]]-pV[L[i]-1];
                }
                if(xd==R[i]-L[i]+1){
                    res+="0";
                    continue;
                }else{
                    res+="1";
                    continue;
                }
            }
        }
        cout<<res<<"\n";
    }
}