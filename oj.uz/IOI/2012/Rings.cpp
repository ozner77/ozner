#include <bits/stdc++.h>
using namespace std;
map<long long,long long> sumas;
vector<vector<int>> V;
vector<vector<int>> R;
long long con1=0;
int N;
void Init(int N){
    vector<int> V1(N,0);
    vector<int> J;
    for(int i=0;i<N;i++){
        V.push_back(V1);
        R.push_back(J);
    }
}
void Link(int A,int B){
    R[A].push_back(B);
    R[B].push_back(A);
    V[A][B]=1;
    V[B][A]=1;
    sumas[A]++;
    sumas[B]++;
}
void cadena(int i,int j,vector<int> visitados){
    visitados[j]=1;
    if(V[i][j]==1){
        if(sumas[j]==2){
            con1++;
        }
    }else{
        if(sumas[j]==1){
            con1++;       
        }
    }
    int jaja=R[j].size();
    for(int k=0;k<jaja;k++){
        if(visitados[R[j][k]]==0 && R[j][k]!=i){
            cadena(i,R[j][k],visitados);
        }
    }
}
int CountCritical(){
    long long res=0;
    for(int i=0;i<N;i++){
        bool com=true;
        for(int j=0;j<N;j++){
            if(i!=j){
                if(V[i][j]==1){
                    if(sumas[j]==1){
                        continue;
                    }else if(sumas[j]>3){
                        com=false;
                        break;
                    }
                }else{
                    if(sumas[j]==0){
                        continue;
                    }else if(sumas[j]>2){
                        com=false;
                        break;
                    }else{
                        vector<int> visitados(N,0);
                        con1=0;
                        cadena(i,j,visitados);
                        if(con1!=2){
                            com=false;
                            break;
                        }
                    }
                }
            }
        }
        if(com){
            res++;
        }
    }
    return res;
}
/*int main(){
    Init(N);
    Link(1,2);
    Link(0,5);
    Link(2,0);
    Link(3,2);
    Link(3,5);
    Link(4,3);
    long long xd=CountCritical();
    cout<<xd;
}*/
//me dio bien en 3 casos de pruebas...
//ma falta comprobar que tenga solo un incio y un final y ya tengo 20 puntos creo
//RINGS PROBLEMA DE MIERDDDDDDDDDD TODA LA PUT* TARDE TRATANDO DE RESOLVERTE Y ERES EL UNICO QUE NO ME SALES CARAJ* >:( ODIOOOOOOOOOOOO ESTE PROBLEMA DEL DEMONIO