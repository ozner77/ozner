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
    map<int,int>M;
    for(int i=0;i<=1000;i++){
        M[i*i]=1;
    }
    while(t--){
        int num=0;
        string s;
        cin>>s;
        int con=3;
        for(auto x:s){
            num+=(x-'0')*pow(10,con);
            con--;
        }
        if(num==0){
            cout<<0<<" "<<0<<"\n";
            continue;
        }
        if(M[num]==1){
            cout<<sqrt(num)-1<<" "<<1<<"\n";
        }else{
            cout<<-1<<"\n";
        }
    }
    
}
