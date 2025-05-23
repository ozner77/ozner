#include <bits/stdc++.h>
using namespace std;
vector<int> portales_accesibles(int n, int k, vector<int> H) {
    vector<int> con(1000001, 0),ans(n,0),M(1000001,0);
    unordered_map<int,int> guardar;
    int c=0;
    for (auto x:H) {
        con[x]++;
        if(x<k){
            c++;
        }
    }
    for(int i=k+1;i<1000001;i++){
        for(int j=i;j<1000001;j+=i){
            M[j]+=con[i];
        }
    }
    for(int i=0;i<n;i++){
        if(H[i]>k){
            ans[i]+=M[H[i]-k];
        }
        if(k==0){
            ans[i]--;
        }
    }
    for(int i=0;i<n;i++){
        if(H[i]==k){
            ans[i]=n-con[k]-c;
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