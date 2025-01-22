#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<bool>> vis;
vector<vector<char>> grid;
void floodfill(ll i,ll j){
    if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || vis[i][j] || grid[i][j]=='#'){
        return;
    }
    vis[i][j]=true;
    floodfill(i+1,j);
    floodfill(i-1,j);
    floodfill(i,j+1);
    floodfill(i,j-1);
}
int main(){
    ll n,m;
    cin>>n>>m;
    vector<bool> V(m,false);
    grid.resize(n);
    for(int i=0;i<n;i++){
        vis.push_back(V);
    }
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(auto x:s){
            grid[i].push_back(x);
        }
    }
    ll res=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] && grid[i][j]=='.'){
                floodfill(i,j);
                res++;
            }
        }
    }
    cout<<res;
}