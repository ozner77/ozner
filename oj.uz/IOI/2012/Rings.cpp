#include <bits/stdc++.h>
using namespace std;
vector<vector<long long>> V;
map<long long,long long> sumas;
void Init(int N){
    vector<long long> V1(N,0);
    for(int i=0;i<N;i++){
        V.push_back(V1);
    }
}
void Link(int A,int B){
    V[A][B]=1;
    V[B][A]=1;
    sumas[A]++;
    sumas[B]++;
}
int CountCritical(){
    int critical=0;
    long long jaja=V.size();
    for(int i=0;i<jaja;i++){
        bool es=true;
        for(int j=0;j<jaja;j++){
            if(i!=j){
                if(V[j][i]==1){
                    if(sumas[j]-1>2){
                        es=false;
                        break;
                    }
                }else{
                    if(sumas[j]>2){
                        es=false;
                        break;
                    }
                }
            }
        }
        if(es){
            critical++;
        }
    }
    return critical;
}
/*int main(){
    Init(5);
    Link(0,2);
    Link(0,3);
    Link(0,4);
    Link(3,4);
    int res=CountCritical();
    cout<<res;
}*/
//me dio bien en 3 casos de pruebas...
//ma falta comprobar que tenga solo un incio y un final y ya tengo 20 puntos creo