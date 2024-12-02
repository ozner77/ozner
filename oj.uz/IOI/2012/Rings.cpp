#include <bits/stdc++.h>
using namespace std;
bool com=false;
vector<int> mainchain;
map<long long,long long> M;
int res;
void iniciar(int N){

}
void unir(int x,int y){
    if(M[x]<2 && M[y]<2){
        M[x]++;
        M[y]++;
    }else if(com){
        
    }
}
int encontrar(int x){

}
void Init(int N){

}
void Link(int A,int B){

}
int CountCritical(){
    return res;
}
int main(){
    Init(100000);
    Link(0,1);
    Link(2,3);
    Link(3,4);
    Link(1,2);
    Link(4,5);
    Link(4,1);
    long long xd=CountCritical();
    cout<<xd;
}