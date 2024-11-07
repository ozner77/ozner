#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,q,p,v,a,XD;
    cin>>n>>q;
    vector<long long> V;
    while(n--){
        cin>>a;
        V.push_back(a);
    }
    while(q--){
        cin>>XD>>p>>v;
        if(XD==0){
            V[p]=v;
        }else{
            vector<long long> V1;
            for(int i=p;i<=v;i++){
                V1.push_back(V[i]);
            }
            sort(V1.rbegin(),V1.rend());
            bool com=true;
            for(int i=2;i<V1.size();i++){
                if(V1[i-1]+V1[i]>V1[i-2]){
                    com=false;
                    cout<<V1[i]+V1[i-1]+V1[i-2]<<"\n";
                    break;
                }
            }
            if(com){
                cout<<0<<"\n";
            }
        }
    }
}