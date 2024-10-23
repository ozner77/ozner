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
        long long Q,x,y,z,mal=0;
        while(Q--){
            cin>>x>>y>>z;
            C[y+n-1-x][V[x][y]]--;
            C[y+n-1-x][z]++;
        }
    }
}
//no logre acabar pero tengo una idea en la que podría hacer un mapa por cada diagonal y luego comprobar que todos esten en 0 menos uno(del que va a estar compuesto la diagonal) y si es así esa diagonal esta bien, luego 
//un contador que diga cuantas diagonales estan mal y si en la query el contador>0 entonces la matriz esta mal o si no esta bien, pero lo implementare mañana porque ya me esta doliendo la cabeza
//pd: ya no haré los problemas a última hora
//pd2: al final decidí avanzar lo más que pueda hoy 22 de octubre