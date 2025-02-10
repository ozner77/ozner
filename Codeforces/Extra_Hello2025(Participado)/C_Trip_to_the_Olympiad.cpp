#define ll long long
#include <bits/stdc++.h>
using namespace std;
string bin(int decimal){
    string binario = "";
    if (decimal == 0) {
        return "0";
    }
    while (decimal > 0) {
        binario = to_string(decimal % 2) + binario;
        decimal = decimal / 2;
    }
    return binario;
}
int dec(string binario) {
    int decimal = 0;
    int longitud = binario.length();
    for (int i = 0; i < longitud; i++) {
        if (binario[i] == '1') {
            decimal +=pow(2, longitud - 1 - i);
        }
    }
    return decimal;
}
int dec2(string binario) {
    int decimal = 0;
    int longitud = binario.length();
    for (int i = 0; i < longitud; i++) {
        if (binario[i] == '0') {
            decimal += pow(2, longitud - 1 - i);
        }
    }
    return decimal;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        string x=bin(a);
        string y=bin(b);
        if(y.size()>x.size()){
            ll res1=pow(2,y.size()-1);
            ll res2=0;
            for(int i=0;i<y.size()-1;i++){
                res2+=pow(2,i);
            }
            ll res3;
            for(int i=a;i<=b;i++){
                if(i!=res1 && i!=res2){
                    res3=i;
                    break;
                }
            }
            cout<<res1<<" "<<res2<<" "<<res3<<"\n";
        }else{
            ll res1=0,res2=0,res3;
            ll con;
            ll con2;
            for(int i=2;i<x.size();i++){
                if(x[i]=='1' && y[i-1]=='1'){
                    con=i;
                    break;
                }
            }
            for(int i=0;i<x.size();i++){
                if(i<=con+1){
                    if(x[i]=='1'){
                        res1+=pow(2,x.size()-i-1);
                    }
                    if(y[i]=='1'){
                        res2+=pow(2,x.size()-i-1);
                    }
                }else{
                    res1+=pow(2,x.size()-i-1);
                }
            }
            for(int i=a;i<=b;i++){
                if(i!=res1 && i!=res2){
                    res3=i;
                    break;
                }
            }
            cout<<res1<<" "<<res2<<" "<<res3<<"\n";
        }
    }
}
//1073741824