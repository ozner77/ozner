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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> V;
        int b=-1;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a==b){
                continue;
            }
            V.push_back(a);
            b=a;
        }
        vector<int> L;
        int i=1;
        L.push_back(V[0]);
        while(i<V.size()){
            if(V[i-1]+1!=V[i]){
                L.push_back(V[i]);
            }else{
                if(i+1>=V.size()){
                    break;
                }
                L.push_back(V[i+1]);
                i++;
            }
            i++;
        }
        cout<<L.size()<<"\n";
    }
}
