#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int n,a;
    cin>>t;
    vector<long long> V;
    while(t--){
        V.clear();
        cin>>n;
        while(n--){
            cin>>a;
            V.push_back(a);
        }
        bool yes=true;
        for(int i=1;i<V.size();i++){
            if(abs(V[i]-V[i-1])==5 || abs(V[i]-V[i-1])==7){
                continue;
            }else{
                yes=false;
                break;
            }
        }
        if(yes){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}