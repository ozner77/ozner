#define ll long long
#define pb push_back
#define mp make_pair
#include <bits/stdc++.h>
using namespace std;
int main(){
    ll l=0;
    ll r=1000000;
    ll m;
    cout<<"piensa en un numero bro \n";
    ll con=0;
    while(true){
        m=(l+r)/2;
        con++;
        cout<<"intento "<<con<<"\n";
        cout<<"tu numero es "<<m<<"?\n";
        cout<<"escribe: mayor,menor o lo encontraste\n";
        string respuesta;
        cin>>respuesta;
        if(respuesta=="mayor"){
            l=m;
        }else if(respuesta=="menor"){
            r=m;
        }else{
            cout<<"biiien lo logree\n";
            cout<<"numero de intentos: "<<con;
            break;
        }
    } 
}