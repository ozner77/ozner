#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t,n,m,a;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>m;
        long long sumas[n+m-1]={0};
        vector<vector<long long>> V;
        for(int j=0;j<n;j++){
            vector<long long> V1;
            for(int k=0;k<m;k++){
                cin>>a;
                V1.push_back(a);
            }
            V.push_back(V1);
        }
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                sumas[k+(n-1)-j]+=V[j][k];
            }
        }
        for(auto x:sumas){
            cout<<x<<" ";
        }
    }
}