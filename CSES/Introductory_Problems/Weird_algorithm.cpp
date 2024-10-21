#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a;
    cin>>a;
    while(a!=1){
        if(a%2==0){
            a=a/2;
            cout<<a<<" ";
        }else{
            a=a*3;
            a++;
            cout<<a<<" ";
        }
    }
}