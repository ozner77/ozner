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
int travel_plan(int N, int M, int R[][2], int L[], int K, int P[])
{
  vector<vector<int>> adj(N);
  vector<vector<int>> dist(N,vector<int>(N,1e9));
  for(int i=0;i<M;i++){
    adj[R[i][0]].pb(R[i][1]);
    adj[R[i][1]].pb(R[i][0]);
    dist[R[i][0]][R[i][1]]=L[i];
  }
  queue<int> Q;
  vector<int> D(N);
  Q.push(0);
  D[0]=0;
  vector<int> visitado(N,false);
  while(!Q.empty()){
    int nodo=Q.front();
    Q.pop();
    visitado[nodo]=true;
    for(auto x:adj[nodo]){
      if(!visitado[x]){
        D[x]=D[nodo]+dist[nodo][x];
        Q.push(x);
      }
    }
  }
  int res=0;
  for(int i=0;i<K;i++){
    res=max(res,D[P[i]]);
  }
  return res;
}
int main(){
  int N=7;
  int M=6;
  int R[6][2]={{0,1},{1,2},{2,3},{2,5},{1,4},{0,7}};
  int L[6]={1,1,1,1,1,100};
  int K=4;
  int P[1]={4};
  ll res=travel_plan(N,M,R,L,K,P);
  cout<<res<<"\n";
}

