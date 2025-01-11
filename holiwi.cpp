#include <bits/stdc++.h> //librerías estándar
using namespace std; //para no escribir std:: todo el rato
int main(){ //función principal
    cout<<"hola"; //prin("hola");
    int entero; //declarar variable entera
    long long entero_grande; //declarar variable entera mas grancde
    double decimal; //declarar numero no entero
    bool bit; //declarar un verdadero/falso
    char caracter; // declarar un caracter ejemplo: 'a'
    string cadena; //declarar una cadena(conjunto de carácteres)
    vector<long long/*tipo de dato*/> V; //declarar un vector(lista en python)
    int x;
    entero++;//le suma 1 a la variable entero
    entero--;//le quita uno a la variable entero
    entero+=x;//le suma x al entero
    entero-=x;//le quita x al entero
    //funciona con +=,-=,*=,/=
    
    
    
    if(bit/*aquí va la condición*/){
        //la condicion es verdadera
    }else{
        //la condicion es falsa;
    }
    for(int i=0/*ir desde cero*/;i<10/*hasta 10*/;i++/*aumentar de uno en uno*/){
        //bucle
        cout<<i<<" ";
    }
    while(false/*condicion*/){
        //bucle hasta que la condicion sea falsa
    }



    vector<long long> Lista;
    Lista.push_back(1);//le añade 1 a la lista(.append() en python)
    int uwu=Lista[0];//devuelve el item en la pocision 0
    uwu=Lista.back();//devuelve la ultima pocision de la lista
    uwu=Lista.size();//devuelve el tamaño de la lista
    Lista.clear();//vacia la lista
    sort(Lista.begin(),Lista.end());//ordena la lista de menor a mayor
    sort(Lista.rbegin(),Lista.rend());//ordena la lista de mayor a menor
    //en realidad se llama vector xd, pero en python es lo equivalente a lo que usas listas
}