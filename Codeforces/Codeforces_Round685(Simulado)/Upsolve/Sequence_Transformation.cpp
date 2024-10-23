#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t,n,a;
    cin>>t;
    while(t--){
        long long ant=-1;
        long long menor=1000000000000;
        map<long long,long long> M;
        vector<long long> V;
        M.clear();
        V.clear();
        cin>>n;
        long long con=0;
        while(n--){
            cin>>a;
            if(a!=ant){
                M[a]++;
                if(con==0){
                M[a]--;
                }
                ant=a;
                V.push_back(a);
            }
            con++;
        }
        long long actual;
        for(auto x:M){
            long long xd=x.second;
            if(xd<=menor){
                actual=x.first;
                if(V[0]==actual){
                    menor=xd;
                }else if(V[V.size()-1]==actual){
                    menor=xd;
                }
            }
        }
        long long res=menor+1;
        if(V[0]==actual){
            res--;
        }
        if(V[V.size()-1]==actual){
            res--;
        }
        cout<<res<<"\n";
    }
}