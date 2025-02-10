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
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vpii> vvpii;
typedef vector<vpll> vvpll;
typedef vector<vvi> vvvi;
typedef vector<vvl> vvvl;
ll int res=0;
ll xd;
vector<ll> V;
void uwu2(ll pos,ll remain,ll int num){
    if(remain>=-1){
        res=max(res,num);
    }
    if(remain<=0){
        return;
    }
    if(pos>=V.size() || pos<0){
        return;
    }
    uwu2(pos-1,remain-1,num);
    if(pos<xd){
        uwu2(pos-1,remain-2,num+V[pos]);
    }
}
void uwu(ll pos,ll remain,ll num){
    if(remain>=-1){
        res=max(res,num);
    }
    if(remain<=0){
        return;
    }
    if(pos>=V.size() || pos<0){
        return;
    }
    uwu(pos+1,remain-1,num);
    uwu(pos+1,remain-2,num+V[pos]);
    uwu2(pos-1,remain-1,num);
    uwu2(pos-1,remain-2,num+V[pos]);
}
void uwu4(ll pos,ll remain,ll int num){
    if(remain>=-1){
        res=max(res,num);
    }
    if(remain<=0){
        return;
    }
    if(pos>=V.size() || pos<0){
        return;
    }
    uwu4(pos+1,remain-1,num);
    if(pos>xd){
        uwu4(pos+1,remain-2,num+V[pos]);
    }
}
void uwu3(ll pos,ll remain,ll num){
    if(remain>=-1){
        res=max(res,num);
    }
    if(remain<=0){
        return;
    }
    if(pos>=V.size() || pos<0){
        return;
    }
    uwu3(pos-1,remain-1,num);
    uwu3(pos-1,remain-2,num+V[pos]);
    uwu4(pos+1,remain-1,num);
    uwu4(pos+1,remain-2,num+V[pos]);
}
long long int findMaxAttraction(int n, int start, int d,int attraction[]){
    for(int i=0;i<n;i++){
        V.pb(attraction[i]);
    }
    xd=start;
    uwu(start,d,0);
    uwu3(start,d,0);
    return res;
}
int main(){
    int n=10;
    int start=2;
    int d=16;
    int attraction[n]={1000000000,1000000000,1000000000,1000000000,1000000000,1000000000,1000000000,1000000000,1000000000,1000000000};
    cout<<findMaxAttraction(n,start,d,attraction);
}