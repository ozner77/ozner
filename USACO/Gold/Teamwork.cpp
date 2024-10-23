#include <bits/stdc++.h>
using namespace std;
//me costo demasiado tiempo entender el tutorial y ahora me duele la cabeza :D
long long N,K;
int main(){
  freopen("teamwork.in","r",stdin);
  freopen("teamwork.out","w",stdout);
  cin>>N>>K;
  vector<long long> V;
  vector<long long> dp;
  long long a;
  for(int i=0;i<N;i++){
    cin>>a;
    V.push_back(a);
    dp.push_back(a);
  }
  long long maximo;
  for(long long i=1;i<N;i++){
    long long maximo=V[i];
    for(int xd=0;xd<K;xd++){
      long long j=i-xd;
      if(j<0){break;}
      maximo=max(maximo,V[j]);
      if(j>0){dp[i]=max(dp[i],dp[j-1]+(maximo*(xd+1)));}
      else{dp[i]=max(dp[i],maximo*(xd+1));}
    }
  }
  cout<<dp[N-1];
}