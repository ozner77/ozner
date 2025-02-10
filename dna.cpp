#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    long long t;
    cin>>t;
    double caca=log(4);
    while(t--){
    ll numero;
    cin >> numero;
    ll con=0;
    if (numero > 3) {
        while (numero>3) {
        numero = numero / 4;
        con++;
        }
        ll res=pow(2,con);
        cout<<res<<"\n";
    }else{
        cout<<1<<"\n";
    }
    }
}