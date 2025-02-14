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
ll MOD=1000000007;
string bruh(string x){
    string ans="";
    for(auto y:x){
        char c=y;
        if(c=='1'){
            continue;
        }
        if(c=='0'){
            ans="";
        }
        if(c!='+'){
            c='2';
        }
        ans+=c;
    }
    return ans;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        a=bruh(a);
        b=bruh(b);
        ll xd=a.size();
        ll lol=b.size();
        vector<int> V={0,0};
        vector<vector<int>> L;
        for(ll i=0;i<=lol;i++){
            L.pb(V);
        }
        vector<vector<vector<int>>> dp;
        for(ll i=0;i<=xd;i++){
            dp.pb(L);
        }
        //cout<<dp[0][0][0];
        dp[0][0][0]=1;

        ll res=0;
        for(ll i=0;i<=xd;i++){
            for(ll j=0;j<=lol;j++){
                for(ll k=0;k<2;k++){
                    ll act=dp[i][j][k];
                    if(act==0){
                        continue;
                    }
                    if(j==lol && i==xd){
                        res=(res+act)%MOD;
                    }else {
                        if(j<lol){
                            dp[i][j+1][1]=(dp[i][j+1][1]+act)%MOD;
                        }
                        if (k == 0){
                            if(i<xd){
                                dp[i+1][j][0]=(dp[i+1][j][0]+act)%MOD;
                            }
                        }
                        else{
                            if(j>0){
                                if (i<xd && b[j-1]!=a[i]){
                                    dp[i+1][j][0]=(dp[i+1][j][0]+act)%MOD;
                                }
                            }
                        }
                    }
                }
            }
        }
        cout<<res<<"\n";
    }
}
//no puedo, no pienso bien
//ENTENDER ESTO ES UNA MRDDDDDDDDDDDDDDDDDD
//ODIO ESTO LLEVO 2 HORAS AQUIIII >:((((()))))