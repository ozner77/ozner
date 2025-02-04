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
ll xd;
string s;
string s2;
unordered_set<string> uwu;
string program(string N){
    map<char,ll> M;
    char var='a';
    reverse(all(N));
    string res="";
    ll acum=1;
    for(int i=0;i<N.size();i++){
        if(N[i]=='+'){
            M[var]=acum;
            var++;
        }else{
            ll caca=N[i]-'0';
            acum*=caca;
        }
    }
    for(auto x:M){
        if(x.second>0){
            res=res+to_string(x.s);
            res=res+x.f;
        }
    }
    sort(all(res));
    return res;
}
void generar(string cad,ll pos,ll pos2){
    if(cad.size()==xd){
        uwu.insert(program(cad));
        return;
    }
    if(pos<xd/2){
        generar(cad+s[pos],pos+1,pos2);
    }
    if(pos2<xd/2){
        generar(cad+s2[pos2],pos,pos2+1);
    }
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cin>>s;
        cin>>s2;
        xd=2*n;
        uwu.clear();
        generar("",0,0);
        cout<<uwu.size();
        cout<<"\n";
    }
}
//no puedo, no pienso bien