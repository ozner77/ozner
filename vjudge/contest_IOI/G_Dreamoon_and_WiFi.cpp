#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> res;
string s1,s2;
void go(ll sig,ll pos){
    if(sig==s2.size()){
        res.push_back(pos);
        return;
    }
    if(s2[sig]=='+'){
        go(sig+1,pos+1);
    }
    else if(s2[sig]=='-'){
        go(sig+1,pos-1);
    }
    else{
        go(sig+1,pos+1);
        go(sig+1,pos-1);
    }
}
int main(){
    cin>>s1>>s2;
    ll pos=0;
    ll uwu=0;
    for(auto x:s1){
        if(x=='+'){
            pos++;
        }
        else{
            pos--;
        }
    }
    go(0,0);
    for(auto x:res){
        if(x==pos){
            uwu++;
        }
    }
    ll ans=res.size();
    double answer=(double)uwu/(double)ans;
    cout<<fixed<<setprecision(12)<<answer;
}