#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll formas=0;
void contar(ll con,string s,map<string,ll> res){
    if(con==s.size()){
        formas++;
        return;
    }
    for(ll i=1;i<=s.size();i++){
        string uwu=s.substr(con,i);
        if(res[uwu]>0){
            res[uwu]--;
            contar(con+i,s,res);
            res[uwu]++;
        }
    }
}
int main(){
    string s;
    cin>>s;
    ll n;
    cin>>n;
    map<string,ll> res;
    while(n--){
        string uwu;
        cin>>uwu;
        res[uwu]++;
    }
    contar(0,s,res);
    cout<<formas;                
}