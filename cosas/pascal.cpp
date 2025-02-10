#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<ll>> pascal;
    vector<ll> l;
    l.push_back(1);
    pascal.push_back(l);
    l.clear();
    l.push_back(1);
    l.push_back(1);
    pascal.push_back(l);
    ll n;
    cin>>n;
    for(int i=1;i<n;i++){
        l.clear();
        l.push_back(1);
        for(int j=0;j<i;j++){
            l.push_back(pascal[i][j]+pascal[i][j+1]);
        }
        l.push_back(1);
        pascal.push_back(l);
    }
    string espacios=" ";
    ll multiplicador=10;
    for(auto x:pascal){
        cout<<"\n";
        espacios="";
        for(int i=0;i<multiplicador;i++){
            espacios+=" ";
        }
        cout<<espacios;
        multiplicador-=2;
        for(auto y:x){
            cout<<y<<"   ";
        }
    }
}