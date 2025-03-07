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
ll n,m;
vpll reflect(pll pos){
    vpll ans(3);
    ll n1=pos.f;ll n2=pos.s;
    ans[0]=mp(n1,n-n2-1);
    ans[1]=mp(n-n1-1,n2);
    ans[2]=mp(n-n1-1,n-n2-1);
    return ans;
}
int main(){
    cin>>n>>m;
    vector<vector<char>> V;
    vector<char> L;
    for(ll i=0;i<n;i++){
        string s;
        cin>>s;
        L.clear();
        for(auto x:s){
            L.pb(x);
        }
        V.pb(L);
    }
    vpll res;
    vector<vector<ll>> arr(n, vector<ll>(n, 0));
    ll ans=0;
    for(ll i=0;i<n/2;i++){
        for(ll j=0;j<n/2;j++){
            res=reflect(mp(i,j));
            pll a=res[0];
            pll b=res[1];
            pll c=res[2];
            ll con=0;
            if(V[i][j]=='#'){
                con++;
            }
            if(V[a.f][a.s]=='#'){
                con++;
            }
            if(V[b.f][b.s]=='#'){
                con++;
            }
            if(V[c.f][c.s]=='#'){
                con++;
            }
            ll caca;
            if(con>=2){
                caca=4-con;
            }else{
                caca=con;
            }
            ans+=caca;
            arr[a.f][a.s]=caca;
            arr[b.f][b.s]=caca;
            arr[c.f][c.s]=caca;
            arr[i][j]=caca;
        }
    }
    cout<<ans<<"\n";
    for(ll i=0;i<m;i++){
        ll x,y;
        cin>>x>>y;
        res=reflect(mp(x-1,y-1));
            pll a=res[0];
            pll b=res[1];
            pll c=res[2];
            ll con=0;
            ans-=arr[x-1][y-1];
            if(V[x-1][y-1]=='#'){
                V[x-1][y-1]='.';
            }else{
                V[x-1][y-1]='#';
            }
            if(V[x-1][y-1]=='#'){
                con++;
            }
            if(V[a.f][a.s]=='#'){
                con++;
            }
            if(V[b.f][b.s]=='#'){
                con++;
            }
            if(V[c.f][c.s]=='#'){
                con++;
            }
            ll caca;
            if(con>=2){
                caca=4-con;
            }else{
                caca=con;
            }
            ans+=caca;
            arr[a.f][a.s]=caca;
            arr[b.f][b.s]=caca;
            arr[c.f][c.s]=caca;
            arr[x-1][y-1]=caca;
        cout<<ans<<"\n";
    }
}
