#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,con=0,t;;
    cin>>t;
    while(t--){
    con=0;
    cin>>a;
    while(a%2==0){
        con++;
        a=a/2;
    }
    while(a%3==0){
        con+=2;
        a=a/3;
    }
    while(a%5==0){
        con+=3;
        a=a/5;
    }
    if(a==1){
        cout<<con<<"\n";
    }else{
        cout<<-1<<"\n";
    }
    }
}