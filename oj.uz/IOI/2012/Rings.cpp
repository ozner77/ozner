#include <bits/stdc++.h>
using namespace std;
vector<vector<long long>> V;
int init(long long N){
    vector<long long> V1(N,0);
    for(int i=0;i<N;i++){
        V.push_back(V1);
    }
}
int Link(long long A,long long B){
    V[A][B]=1;
    V[B][A]=1;
    //estaba pensando en usar union find pero no se com linkearlos D:
}
int CountCritical(){
    long long critical;
    return critical;
}
int cadena(){
    //si de por si es una cadena todos los anillos serían critical
    bool respuesta=false;
    return respuesta;
}