#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<long long > V(10000000,0);
    vector<long long> prime;
    prime.push_back(1);
    for(int i=2;i<V.size();i++){
        if(V[i]==0){
            prime.push_back(i);
            for(int j=i;j<V.size();j+=i){
                V[j]=1;
            }
        }
    }
    long long  t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long res=1;
        for(int i=0;i<prime.size();i++){
            if(n%prime[i]==0){
                res=prime[i];
            }
        }
        cout<<res<<"\n";
    }
}