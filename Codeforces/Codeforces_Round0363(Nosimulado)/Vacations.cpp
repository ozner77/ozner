#include <bits/stdc++.h>
using namespace std;
long long p[101],dp[4][101],n,ans;
long long M(long long* arr,long long value,long long size){
    fill(arr,arr+size,value);
    return 0;
}
long long mr(long long i,long long ant){
    if(i==n)return 0;
    if(dp[ant][i]!=-1){
        return dp[ant][i];
    }
    if(ant==1){
        if(p[i]==0){
            ans=1+mr(i+1,3);
        }
        if(p[i]==1){
            ans=min(mr(i+1,2),1+mr(i+1,3));
        }
        if(p[i]==2){
            ans=1+mr(i+1,3);
        }
        if(p[i]==3){
            ans=min(mr(i+1,2),1+mr(i+1,3));
        }
    }
    else if(ant==2){
        if(p[i]==0){
            ans=1+mr(i+1,3);
        }
        if(p[i]==1){
            ans=1+mr(i+1,3);
        }
        if(p[i]==2){
            ans=min(mr(i+1,1),1+mr(i+1,3));
        }
        if(p[i]==3){
            ans=min(mr(i+1,1),1+mr(i+1,3));
        }
    }
    else{
        if(p[i]==0){
            ans=1+mr(i+1,3);
        }
        if(p[i]==1){
            ans=min(mr(i+1,2),1+mr(i+1,3));
        }
        if(p[i]==2){
            ans=min(mr(i+1,1),1+mr(i+1,3));
        }
        if(p[i]==3){
            ans=min(mr(i+1,2),mr(i+1,1));
        }
    }
    return dp[ant][i]=ans;
}
int main(){
    cin>>n;
    M((long long*)dp,-1,sizeof(dp)/sizeof(long long));
    for(int i=0;i<n;i++)cin>>p[i];
    cout<<mr(0,0);
    return 0;
}
//ayuda esto me esta costando demasiado, pero gracias a esto aprendi muchas mmds nuevas
//diego sigues vivo? xd