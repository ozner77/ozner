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
int main(){
    ll n;
    cin>>n;
    while(n--){
        ll a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        ll con=0;
        ll con2=0;
        for(auto x:s){
            if(x=='S'){
                con++;
            }else{
                con2++;
            }
        }
        if(con>=b){
            cout<<a<<"\n";
        }else{
            cout<<a+b-con-1<<"\n";
        }
    }
}
//plantillita