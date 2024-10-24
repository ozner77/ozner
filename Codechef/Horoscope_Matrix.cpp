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
        vector<vector<long long>> longi;
        for(int j=0;j<n;j++){
            vector<long long> temp;
            for(int k=0;k<m;k++){
                long long jaja=C[k+n-1-j][V[j][k]];
                temp.push_back(jaja);
            }
            longi.push_back(temp);
        }
        long long Q,x,y,z,mal=0;
        vector<long long> posicionesmal(n+m-1,0);
        cin>>Q;
        while(Q--){
            cin>>x>>y>>z;
            x--;
            y--;
            C[y+n-1-x][V[x][y]]--;
            C[y+n-1-x][z]++;
            V[x][y]=z;
            if(C[y+n-1-x][V[x][y]]==longi[x][y]){
                if(posicionesmal[y+n-1-x]==1){
                    mal--;
                    posicionesmal[y+n-1-x]=0;
                }
            }else{
                if(posicionesmal[y+n-1-x]==0){
                    posicionesmal[y+n-1-x]=1;
                    mal++;
                }
            }
            if(mal==0){
                cout<<"Yes\n";
            }else{
                cout<<"No\n";
            }
        }
    }
}
//VAMOOOOOOOOOS al fin...