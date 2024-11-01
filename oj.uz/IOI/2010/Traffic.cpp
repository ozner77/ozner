#include <traffic.h>
#include <bits/stdc++.h>
using namespace std;
int LocateCentre(int N, int P[], int S[], int D[]){
    vector<long long> V;
    V.push_back(P[0]);
    for(int i=1;i<N;i++){
        V.push_back(V[i-1]+P[i]);
    }
    long long minmax=10000000000;
    long long res=0;
    for(int i=0;i<N;i++){
        long long a=V[N-1]-V[i];
        long long b=V[i]-P[i];
        long long c=max(a,b);
        if(c<minmax){
            minmax=c;
            res=i;
        }
    }
    return res;
}
/*int main(){
    long long N=5;
    int P[]={1,2,3,4,5};
    int S[]={1,2,3,4,5};
    int D[]={1,2,3,4,5};
    long long res=LocateCentre(N,P,S,D);
    cout<<res;
}*/