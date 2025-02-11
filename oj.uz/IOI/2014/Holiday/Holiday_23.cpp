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
set<ll> s;
vector<ll> res;
int findMaxAttraction(int n, int start, int d,int attraction[]){
    if(start==0){
        
    }else{
        return 1;
    }
}
int main(){
    ll n,start,d;
    n=100000;
    start=0;
    d=100001;
    int V[n];
    for(int i=0;i<n;i++){
        V[i]=100;
    }
    /*for(auto x:res){
        cout<<x<<" ";
    }*/
    ll ans=findMaxAttraction(n,start,d,V);
    cout<<ans;
}
