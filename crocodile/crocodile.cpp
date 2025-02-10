#include "crocodile.h"
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
int travel_plan(int N, int M, int R[][2], int L[], int K, int P[]){
  vector<pll> dist(N,mp(1e18,1e18));
  priority_queue<pll, vector<pll>, greater<pll>> pq;
  vector<vector<pll>> adj(N);
  vector<bool> visited(N,false);
  for(ll i=0;i<K;i++){
    dist[P[i]].f=0;
    dist[P[i]].s=0;
    pq.push(mp(0,P[i]));
  }
  for(ll i=0;i<M;i++){
    adj[R[i][0]].pb(mp(R[i][1],L[i]));
    adj[R[i][1]].pb(mp(R[i][0],L[i]));
  }
  while (!pq.empty()) {
    ll nodo=pq.top().s;
    ll dis=pq.top().f;
    pq.pop();
    if(visited[nodo]) continue;
    visited[nodo]=true;
    for (auto x : adj[nodo]) {
      ll vec=x.f;
      ll w=x.s;
      if (dist[nodo].s+w < dist[vec].f){
        dist[vec].s=dist[vec].f;
        dist[vec].f=dist[nodo].s+w;
        if(dist[vec].s<1e18){
          pq.push({dist[vec].s, vec});
        }
      }else if(dist[nodo].s+w < dist[vec].s){
        dist[vec].s=dist[nodo].s+w;
        pq.push({dist[vec].s, vec});
      }
    }
  }
  return dist[0].s;
}
int main(){
  int N=5;
  int M=7;
  int K=2;
  int R[][2]={{0,2},{0,3},{3,2},{2,1},{0,1},{0,4},{3,4}};
  int L[]={4,3,2,10,100,7,9};
  int P[]={1,3};
  cout<<travel_plan(N,M,R,L,K,P);
}


