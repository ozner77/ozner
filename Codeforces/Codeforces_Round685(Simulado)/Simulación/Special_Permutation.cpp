#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<long long> V;
        for(int i=0;i<n;i++){
            V.push_back(i+1);
        }
        reverse(V.begin(),V.end());
        if(n%2!=0){
            long long temp=V[n/2];
            V[n/2]=V[n/2-1];
            V[n/2-1]=temp;
        }
        for(auto x:V){
            cout<<x<<" ";
        }
        cout<<"\n";
    }
}