#include <bits/stdc++.h>
using namespace std;
int main(){
    set<long long> res;
    long long n;
    cin>>n;
    long long uwu=pow(n,0.5);
    for(long long i=1;i<=uwu;i++){
        if(n%i==0){
            res.insert(i);
            res.insert(n/i);
        }
    }
    for(auto x:res){
        cout<<x-1<<" ";
    }
}