#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> V;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        V.push_back(a);
    }
    vector<int> L;
    L.push_back(V[0]);
    for(int i=1;i<n;i++){
        if(V[i]!=V[i-1]){
            L.push_back(V[i]);
        }
    }
    for(auto x:L){
        cout<<x<<" ";
    }
}