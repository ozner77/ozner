#include <bits/stdc++.h>
using namespace std;
int besthub(int R,int L,int X[],long long B){
    vector<long long> p(R+1,0);
    for(int i=0;i<R;i++){
        p[i+1]=p[i]+X[i];
    }
    long long ri=0,res=1;
    for(int le=0;le<R;le++){
        while(ri<R){
            long long mid=(le+ri+1)/2,q=0;
            if((le+ri+1)%2!=0){
                q-=X[mid];
            }
            q-=p[mid]-p[le];
            q+=p[ri+1]-p[mid];
            if(q>B){
                break;
            }
            ri++;
        }
        res=max(res,ri-le);
        if(ri==R){
            break;
        }
    }
    return res;
}
/*int main(){
    int X[5]={1,2,10,12,14};
    cout<<besthub(5,20,X,6);
}*/