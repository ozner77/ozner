#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    vector<long long> V;
    long long xd=1;
    for(int i=0;i<22;i++){
        V.push_back(xd);
        xd=xd*2;
    }
    while(t--){
        long long a;
        cin>>a;
        for(int i=0;i<V.size();i++){
            if(V[i]>=a){
                cout<<i+1<<"\n";
                break;
            }
        }
    }
}