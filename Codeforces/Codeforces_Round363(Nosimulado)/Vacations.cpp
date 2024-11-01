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
    long long cads1=0;
    long long cads2=0;
    for(int i=0;i<V.size();i+=2){
        if(V[i]==V1[i+1] && V[i]==1){
            cads1++;
        }
    }
    for(int i=0;i<V1.size();i+=2){
        if(V1[i]==V[i+1] && V1[i]==1){
            cads2++;
        }
    }
    cout<<max(cads1,cads2);
}
//tengo un enfoque raro pero recuerden mis palabras, este enfoque servirá