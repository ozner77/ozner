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