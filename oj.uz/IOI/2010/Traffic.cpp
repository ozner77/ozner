#include <bits/stdc++.h>
#include "traffic.h"
using namespace std;
vector<vector<int>> adj;
vector<long long> acum;
vector<int> peso;
vector<long long> root;
int realans;
long long ans=100000000000;
void dfs(int cur,int prev){
   for(auto x:adj[cur]){
      if(x!=prev){
         dfs(x,cur);
         acum[cur]+=acum[x];
      }
   }
   acum[cur]+=peso[cur];
}
void dfs2(int cur,int prev){
   if(cur!=0){
      long long jejeje=0;
      for(auto x:adj[cur]){
         if(x!=prev){
            jejeje=max(jejeje,acum[x]);
         }
      }
      jejeje=max(jejeje,acum[0]-acum[cur]);
      if(jejeje<ans){
         realans=cur;
         ans=jejeje;
      }
   }
   for(auto x:adj[cur]){
      if(x!=prev){
         dfs2(x,cur);
      }
   }
}
int LocateCentre(int N, int pp[], int S[], int D[]) {
   adj.resize(N);
   acum.resize(N);
   root.resize(N);
   for(int i=0;i<N;i++){
      peso.push_back(pp[i]);
   }
   for(int i=0;i<N-1;i++){
      adj[S[i]].push_back(D[i]);
      adj[D[i]].push_back(S[i]);
   }  
   dfs(0,-1);
   long long xd=0;
   for(auto x:adj[0]){
      xd=max(xd,acum[x]);
   }
   if(xd<ans){
      realans=0;
      ans=xd;
   }
   root[0]=acum[0];
   dfs2(0,-1);
   return realans;
}
static int N,P[1000000],S[1000000],D[1000000];
int main(){
   int i;
   scanf("%d",&N);
   for (i=0;i<N;i++) scanf("%d",&P[i]);
   for (i=0;i<N-1;i++) scanf("%d%d",&S[i],&D[i]);
   int r = LocateCentre(N,P,S,D);
   printf("%d\n",r);
   return 0;
}
