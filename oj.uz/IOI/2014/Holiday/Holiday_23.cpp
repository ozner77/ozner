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
ll findMaxAttraction(int n, int start, int d, int attraction[]){
    ll res=0;
    for(ll i=start;i>=0;i--){
        priority_queue<int, vector<int>, greater<int>> pq;
        ll ans=0;
        for(ll j=i;j<n;j++){
            pq.push(attraction[j]);
            ans+=attraction[j];
            if(j<start){
                continue;
            }
            ll visit1=(start-i)*2+(j-start);
            ll visit2=(start-i)+(j-start)*2;
            ll visit=d-min(visit1,visit2);
            if(visit<=0){
                break;
            }
            while(pq.size()>visit){
                ans-=pq.top();
                pq.pop();
            }
            res=max(res,ans);
        }
    }
    return res;
}
int main(){
    ll n,start,d;
    n=15;
    start=1;
    d=14;
    int V[15]={100,1,1,1,1,1,1,1,1,1,1,1,1,1,100};
    ll ans=findMaxAttraction(n,start,d,V);
    cout<<ans;
}
//me costo mas entender de lo que me gustaría, pero gracias Agus
