#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

vector<int> portales_accesibles(int N, int K, vector<int> &H) {
    vector<int> ans(N,0),M1(1000000,0);
    unordered_map<int,int> M;
    int c=0;
    for(int i=0;i<N;i++){
        M[H[i]]++;
        if(H[i]<K){
            c++;
        }
    }
    for(int i=1;i<1000000;i++){
        if(M[i]==0){
            continue;
        }
        for(int j=i;j<1000000;j+=i){
            M1[j]+=M[i];
        }
    }
    for(int i=0;i<N;i++){
        if(H[i]>K && H[i]%K!=0){
            ans[i]+=M1[H[i]-K];
        }
    }
    int xd=N-c-M[K];
    for(int i=0;i<N;i++){
        if(H[i]==K){
            ans[i]=xd;
        }
    }
    return ans;
}

/*int main(){
    int n,k;
    cin>>n>>k;
    vector<int> V;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        V.push_back(a);
    }
    for(auto x:portales_accesibles(n,k,V)){
        cout<<x<<" ";
    }
}*/