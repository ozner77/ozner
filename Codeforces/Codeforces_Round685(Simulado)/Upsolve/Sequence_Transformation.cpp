#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t,n,a;
    cin>>t;
    while(t--){
        long long ant=-1;
        long long menor;
        map<long long,long long> M;
        vector<long long> V;
        M.clear();
        V.clear();
        cin>>n;
        long long necesito=n;
        long long con=0;
        while(n--){
            cin>>a;
            if(a!=ant){
                ant=a;
                M[a]++;
                if(con==0){
                    M[a]--;
                }
            }
            if(con==necesito-1){
                    M[a]--;
                }
            con++;
        }
        menor=M[a];
        for(auto x:M){
            long long xd=x.second;
            if(xd<menor){
                menor=xd;
            }
        }
        cout<<menor+1<<"\n";
    }
}