#include <bits/stdc++.h>
using namespace std;
long long t;
int main(){
    cin>>t;
    long long a,b,c;
    while(t--){
        vector<long long> V;
        cin>>a>>b>>c;
        V.push_back(a);
        V.push_back(b);
        V.push_back(c);
        sort(V.begin(),V.end());
        long long res=0;
        long long d=V[2]-V[1];
        if(V[0]>=d){
            V[2]=V[2]-d;
            V[0]=V[0]-d;
            res+=d;
            if(V[0]%2==0){
                res+=V[0];
                res+=V[2]-(V[0]/2);
            }else{
                res+=V[0]-1;
                res+=V[2]-(V[0]/2);
            }
        }else{
            res+=V[0];
            res+=V[1];
        }
        cout<<res<<"\n";
    }
}
/*... me fue mal en el contest, que mas puedo decir...*/