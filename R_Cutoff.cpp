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
typedef unordered_map<ll,ll> umll;
typedef set<ll> sl;
typedef unordered_set<ll> usl;
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
int main(){
    ll n,x;
    cin>>n>>x;
    vl V;
    ll sum=0;
    for(int i=0;i<n-1;i++){
        ll a;
        cin>>a;
        sum+=a;
        V.pb(a);
    }
    sort(all(V));
    sum-=V[0];
    sum-=V[V.size()-1];
    ll res1,res2;
    ll dif1=x-sum;
    sum+=V[0];
    ll dif2=x-sum;
    if(dif2<=0){
        cout<<0;
    }else if(dif1<=0){
        cout<<0;
    }else{
        if(dif1<=V[V.size()-1]){
            cout<<dif1;
        }else{
            cout<<-1;
        }
    }
}
