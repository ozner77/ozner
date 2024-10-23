#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t,n,m,a;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>m;
        vector<map<long long,long long>> C(n+m-1);
        vector<vector<long long>> V;
        for(int j=0;j<n;j++){
            vector<long long> V1;
            for(int k=0;k<m;k++){
                cin>>a;
                V1.push_back(a);
            }
            V.push_back(V1);
        }
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                C[k+n-1-j][V[j][k]]++;
            }
        }
        long long Q,x,y,z,mal;
        bool com;
        cin>>Q;
        while(Q--){
            cin>>x>>y>>z;
            x--;
            y--;
            C[y+n-1-x][V[x][y]]--;
            C[y+n-1-x][z]++;
            V[x][y]=z;
            bool estamal=false;
            for(auto x:C){
                bool com=false;
                bool com2=false;
                for(auto y:x){
                    long long xd=y.second;
                    long long lol=y.first;
                    if(xd>0){
                        if(com2){
                            com=true;
                            break;
                        }else{
                            com2=true;
                        }
                    }
                }
                if(com){
                    estamal=true;
                    break;
                }
            }
            if(estamal){
                cout<<"No"<<"\n";
            }else{
                cout<<"Yes"<<"\n";
            }
        }
    }
}
//Partial correct 40%... TLE
//creo que cambiare de enfoque xd;