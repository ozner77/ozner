#include <bits/stdc++.h>
using namespace std;
int main(){
    map<long long,long long> M;
    long long t,n,a;
    cin>>t;
    while(t--){
        vector<long long> V;
        V.clear();
        M.clear();
        cin>>n;
        while(n--){
            cin>>a;
            M[a]++;
            V.push_back(a);
        }
        bool com=true;
        for(auto x:M){
            long long xd=x.second;
            long long lol=x.first;
            if(xd==1){
            for(int j=0;j<V.size();j++){
                if(V[j]==lol){
                    cout<<j+1<<"\n";
                    break;
                }
            }
            com=false;
            break;
            }
        }
        if(com){
            cout<<"-1\n";
        }
    }
}