#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
typedef pair<ll,ll> pll;
typedef pair<int,int> pii;
typedef map<int,int> mii;
typedef map<ll,ll> mll;
int main(){
    string s;
    cin>>s;
    string real="";
    for(auto x:s){
        if(x=='W' || x=='D'){
            real+=x;
        }
    }
    vector<pair<char,ll>> V;
    for(int i=0;i<real.size();i++){
        if(i==0){
            V.pb(mp(real[i],1));
        }else{
            if(real[i]==real[i-1]){
                V[V.size()-1].s++;
            }else{
                V.pb(mp(real[i],1));
            }
        }
    }
    while(true){
        vector<pair<char,ll>> L=V;
        V.clear();
        for(auto x:L){
            if(x.f!='L'){
                V.pb(x);
            }
        }
        ll con=0; 
        for(int i=0;i<V.size();i++){
            if(V[i].f=='D'){
                if(V[i].s>=3){
                    continue;
                }else if(V[i].s==1){
                    if(i-1>=0 && i+1<V.size()){
                    if(V[i-1].s>=2 || V[i+1].s>=2){
                        V[i].s=V[i-1].s+V[i+1].s;
                        V[i-1].f='L';
                        V[i+1].f='L';
                        V[i].f='W';
                        con++;
                        break;
                    }
                    }
                }else if(V[i].s==2){
                    if(i-1>=0 && i+1<V.size()){
                    if(V[i-1].s>=2 && V[i+1].s>=2){
                        V[i].s=V[i-1].s+V[i+1].s;
                        V[i-1].f='L';
                        V[i+1].f='L';
                        V[i].f='W';
                        con++;
                        break;
                    }
                    }
                }
            }
        }
        if(con==0){
            break;
        }
    }
    ll res=0;
    for(auto x:V){
        if(x.f=='D'){
            res+=x.s;
        }else{
            res+=2*x.s;
            if(x.s>=3){
                res+=x.s-2;
            }
        }
    }
    cout<<res;
}
//plantillita