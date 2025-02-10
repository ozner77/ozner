#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,a;
    cin>>n;
    unordered_map<long long,long long> M;
    vector<long long> V;
    vector<long long> L;
    for(int i=0;i<n;i++){
        cin>>a;
        V.push_back(a);
    }
    for(int i=0;i<n;i++){
        cin>>a;
        L.push_back(a);
    }
    vector<bool> si(n,false);
    long long suma=0;
    for(int i=0;i<n;i++){
        if(V[i]==L[i]){
            suma++;
            si[i]=true;
        }
    }
    M[suma]++;
    long long sumacop=suma;
    for(int i=2;i<=n;i++){
        suma=sumacop;
        for(int j=i-1;j<n;j++){
            for(int k=0;k<i;k++){
                if(si[j-(i-1)+k]){
                    suma--;
                }
                if(L[j-(i-1)+k]==V[j-k]){
                    suma++;
                }
            }
            M[suma]++;
        }
    }
    for(auto x:M){
        cout<<x.second<<" ";
    }
}