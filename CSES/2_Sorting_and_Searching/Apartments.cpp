#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main(){
    ll n,m,k,a;
    vector<ll> V;
    vector<ll> P;
    cin>>n>>m>>k;
    while(n--){
        cin>>a;
        V.push_back(a);
    }
    while(m--){
        cin>>a;
        P.push_back(a);
    }
    ll res=0;
    priority_queue<int, vector<int>, greater<int>> qV;
    priority_queue<int, vector<int>, greater<int>> qP;
    for(auto x:V){
        qV.push(x);
    }
    for(auto x:P){
        qP.push(x);
    }
    while(!qV.empty()){
        ll persona=qV.top();
        if(qP.empty()){
            break;
        }
        ll cuarto=qP.top();
        if(persona>=cuarto-k && persona<cuarto){
            res++;
            qV.pop();
            qP.pop();
        }else if(persona<=cuarto+k && persona>cuarto){
            res++;
            qV.pop();
            qP.pop();
        }else if(persona==cuarto){
            res++;
            qV.pop();
            qP.pop();
        }else if(persona<cuarto){
            qV.pop();
        }else{
            qP.pop();
        }
    }
    cout<<res;
}
//https://cses.fi/problemset/task/1084