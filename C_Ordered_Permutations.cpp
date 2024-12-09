#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,k,t;
    cin>>t;
    vector<long long> V;
    long long xd=1;
    for(int i=0;i<22;i++){
        V.push_back(xd);
        xd=xd*2;
    }
    while(t--){
        cin>>n>>k;
        vector<long long> V1;
        for(int i=0;i<V.size();i++){
            if(V[i]>=n){
                V1.push_back(i);
                k=k-(V[i]/2);
                break;
            }
        }
        for(auto x:V1){
            cout<<x<<" ";
        }
        cout<<"\n";
    }
}