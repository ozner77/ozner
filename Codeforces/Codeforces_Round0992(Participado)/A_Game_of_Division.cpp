#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long res;
        long long n,k;
        cin>>n>>k;
        vector<long long> V;
        while(n--){
            long long a;
            cin>>a;
            V.push_back(a);
        }
        bool com=false;
        for(int i=0;i<V.size();i++){
            bool com2=true;
            for(int j=0;j<V.size();j++){
                if(j!=i){
                if(abs(V[i]-V[j])%k==0){
                    com2=false;
                    break;
                }
                }
            }
            if(com2){
                com=true;
                res=i;
                break;
            }
        }
        if(com){
            cout<<"YES\n";
            cout<<res+1<<"\n";
        }else{
            cout<<"NO\n";
        }
    }
}