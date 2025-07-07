#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
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
vector<vector<char>> adj;
int n,m;
void floodfill(int i,int j){
    if(i<0 || i>=n || j<0 || j>=m){
        return;
    }
     if(adj[i][j]=='B'){
        adj[i][j]='N';
        return;
    }
    if(adj[i][j]=='N'){
        return;
    }
    if(adj[i][j]=='E'){
        return;
    }
    if(adj[i][j]=='#'){
        return;
    }
    adj[i][j]='E';
    floodfill(i-1,j);
    floodfill(i+1,j);
    floodfill(i,j-1);
    floodfill(i,j+1);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<vector<char>> V(n,vector<char>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>V[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(V[i][j]=='B'){
                    if(i+1<n){
                        if(V[i+1][j]!='G' && V[i+1][j]!='B'){
                            V[i+1][j]='#';
                        }
                    }
                    if(i-1>=0){
                        if(V[i-1][j]!='G' && V[i-1][j]!='B'){
                            V[i-1][j]='#';
                        }
                    }
                    if(j+1<m){
                        if(V[i][j+1]!='G' && V[i][j+1]!='B'){
                            V[i][j+1]='#';
                        }
                    }
                    if(j-1>=0){
                        if(V[i][j-1]!='G' && V[i][j-1]!='B'){
                            V[i][j-1]='#';
                        }
                    }
                }
            }
        }
        adj=V;
        floodfill(n-1,m-1);
        bool ok=true;
        for(auto x:adj){
            for(auto y:x){
                if(y=='G'){
                    ok=false;
                }
                if(y=='N'){
                    ok=false;
                }
            }
        }
        if(ok){
            cout<<"Yes";
        }else{
            cout<<"No";
        }
        cout<<"\n";
    }
}
