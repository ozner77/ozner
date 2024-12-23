#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t,n,k,a,b;
    cin>>t;
    while(t--){
        map<long long ,long long> M;
        M.clear();
        cin>>n>>k;
        while(k--){
            cin>>a>>b;
            M[a]+=b;
        }
        vector<long long> V;
        V.clear();
        for(auto x:M){
            V.push_back(x.second);
        }
        sort(V.rbegin(),V.rend());
        long long suma=0;
        for(int i=0;i<n;i++){
            if(i==V.size()){
                break;
            }
            suma+=V[i];
        }
        cout<<suma<<"\n";
    }
}