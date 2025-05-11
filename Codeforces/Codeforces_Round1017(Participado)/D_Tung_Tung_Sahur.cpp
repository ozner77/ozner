#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
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
    ll t;
    cin>>t;
    while(t--){
        string p,s;
        cin>>p;
        cin>>s;
        vector<int> V,L;
        vector<char> V1,L1;
        ll con=1;
        for(ll i=1;i<p.size();i++){
            if(p[i]==p[i-1]){
                con++;
            }else{
                V1.push_back(p[i-1]);
                V.push_back(con);
                con=1;
            }
        }
        V1.push_back(p[p.size()-1]);
        V.push_back(con);
        con=1;
        for(ll i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                con++;
            }else{
                L1.push_back(s[i-1]);
                L.push_back(con);
                con=1;
            }
        }
        L1.push_back(s[s.size()-1]);
        L.push_back(con);
        bool ok=true;
        if(V1.size()!=L1.size()){
            cout<<"NO";
            ok=false;
        }else{
            for(ll i=0;i<V1.size();i++){
                if(V1[i]==L1[i]){
                    if(L[i]<=2*V[i]){
                        if(V[i]>L[i]){
                            cout<<"NO";
                            ok=false;
                            break;
                        }
                    }else{
                        cout<<"NO";
                        ok=false;
                        break;
                    }
                }else{
                    cout<<"NO";
                    ok=false;
                    break;
                }
            }
        }
        if(ok){
            cout<<"YES";
        }
        cout<<"\n";
    }
}
