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
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c,d,x,y,x1,y1,x2,y2;
        cin>>a>>b>>c>>d>>x>>y>>x1>>y1>>x2>>y2;
        if(x1==x2 && (a>0 || b>0)){
            cout<<"NO\n";
        }else if(y1==y2 && (c>0 || d>0)){
            cout<<"NO\n";
        }
        else if(x1<=x-a+b && x+b-a<=x2 && y1<=y-c+d && y+d-c<=y2){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}
//plantillita