#include <bits/stdc++.h>
using namespace std;
int main(){
    map<long long, long long> M;
    M[4]=0;
    M[8]=0;
    M[15]=0;
    M[16]=0;
    M[23]=0;
    M[42]=0;
    long long a,b,len=0,terminado=0;
    cin>>a;
    while(a--){
        len++;
        cin>>b;
        if(b==4){
            M[4]++;
        }
        if(b==8 && M[4]>0){
            M[8]++;
            M[4]--;
        }
        if(b==15 && M[8]>0){
            M[15]++;
            M[8]--;
        }
        if(b==16 && M[15]>0){
            M[16]++;
            M[15]--;
        }
        if(b==23 && M[16]>0){
            M[23]++;
            M[16]--;
        }
        if(b==42 && M[23]>0){
            M[42]++;
            M[23]--;
        }
    }
    len=len-(M[42]*6);
    cout<<len;
}
//NO PUEDO CREER QUE NO PUDE HACER ESTO TAN FÁCIL EN LA SIMULACIÓN :(