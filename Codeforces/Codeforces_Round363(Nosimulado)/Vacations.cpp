#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,a;
    cin>>n;
    vector<long long> V;
    vector<long long> V1;
    while(n--){
        cin>>a;
        if(a==0){
            V.push_back(0);
            V1.push_back(0);
        }else if(a==1){
            V.push_back(1);
            V1.push_back(0);
        }else if(a==2){
            V.push_back(0);
            V1.push_back(1);
        }else{
            V.push_back(1);
            V1.push_back(1);
        }
    }
    vector<long long> cads1(n,0);
    vector<long long> cads2(n,0);
    for(int i=0;i<V.size();i+=2){
        if(V[i]==V1[i+1] && V[i]==1){
            cads1[i]=1;
            cads1[i+1]=1;
        }
    }
    for(int i=0;i<V1.size();i+=2){
        if(V1[i]==V[i+1] && V1[i]==1){
            cads2[i]=1;
            cads2[i]=1;
        }
    }
    long long res=0;
    for(int i=0;i<cads1.size();i++){
        if(cads1[i]==1){
            res++;
        }else if(cads2[i]==1){
            res++;
        }
    }
    cout<<res;
}
//tengo un enfoque raro pero recuerden mis palabras, este enfoque servirá