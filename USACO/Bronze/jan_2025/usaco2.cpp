#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<long long> V;
    unordered_map<long long,long long> M;
    unordered_map<long long,long long> M1;
    unordered_map<long long,long long> M2;
    unordered_set<long long> S;
    long long n;
    cin>>n;
    for(long long i=0;i<n;i++){
        long long a;
        cin>>a;
        V.push_back(a);
        M1[a]++;
        S.insert(a);
    }
    reverse(V.begin(),V.end());
    long long res=0;
    for(long long i=0;i<n-1;i++){
        M1[V[i]]--;
        M2[V[i]]++;
        if(M2[V[i]]>=2){
            if(M[V[i]]>0){
                if(M1[V[i]]==0){
                    S.erase(V[i]);
                }
                continue;
            }else{
                M[V[i]]++;
                res+=S.size()-1;
            }
        }
        if(M1[V[i]]==0){
            S.erase(V[i]);
        }
    }
    cout<<res;
}