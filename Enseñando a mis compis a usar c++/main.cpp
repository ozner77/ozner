#include <bits/stdc++.h>//librerías estándar
using namespace std;//std
int main(){
    //cout<< = print()
    //cout<<"Hola mundo";
    //-2147483647 a 2147483647 para int
    int entero;
    //-9.223.372.036.854.775.808 a 9.223.372.036.854.775.807.
    long long entero_grande;
    //doble de long long pero no puede almacenar numeros negativos casi inutil
    unsigned long long entero_gigante;
    //bool(falso,verdadero)
    bool verdadero=true;
    bool falso=false;
    //flotantes que almacenan lo mismo que un int pero con decimales
    double flotante=2.32;
    long double xd=2.325;
    //cadenas
    string cadena="el mikol no esta aprendiendo nada seguro";
    char caracter='6';
    if(verdadero){
        cout<<"verdadero";
    }else{
        cout<<"falso";
    }
    //for i in range():
    //i=i+1 -> i++
    //i=i-1 -> i--
    //i=i+n -> i+=n
    //for(int variable;variable<límite;de cuanto en cuanto ira)
    for(long long i;i<10;i=i++){
        cout<<i<<" ";
    }
    //if(condicion)
    if(verdadero){
        cout<<"verdadero";
    }
    vector<int> V;//V=[]
    V.push_back(1);//V.append(1)
    cout<<V[0];
    //inputs
    //n=int(input())
    long long n;
    cin>>n;
    //Lista=map(int,input().split())
    long long n;
    vector<long long> V;
    for(int i=0;i<10;i++){
        cin>>n;
        V.push_back(n);
    }
    //10000000 de complejidad en c++ para un segundo
    //100000 de complejidad en python para un segundo
}