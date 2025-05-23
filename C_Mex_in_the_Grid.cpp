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
int main() {
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<ll>> ans(n,vector<ll>(n, -1));
        int x=n/2,y=n/2;
        if (n % 2 == 0) {
            x=n/2-1;
            y=n/2-1;
        }
        ll con=0;
        ans[x][y]=con++;
        ll uwu[]={0, 1, 0, -1},uwu2[]={1,0,-1,0};
        int l=1;
        while (con<n*n) {
            for (ll j=0;j<4;j++) {
                ll a=l;
                for (ll i=0;i<a;i++) {
                    x+=uwu[j];
                    y+=uwu2[j];
                    if (x>=0 && x<n){
                        if(y>=0 && y<n){
                            ans[x][y]=con;
                            con++;
                        }
                    }
                }
                if (j==1 || j==3){
                    l++;
                }
            }
        }
        for (auto x:ans) {
            for (auto y:x) {
                cout<<y<<" ";
            }
            cout<<"\n";
        }
    }
}
