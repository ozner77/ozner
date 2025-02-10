#include <bits/stdc++.h>
using namespace std;
int main(){
    long long N;
    long long uwu=1;
    long long res=1;
    cin>>N;
    while(uwu!=N){
        res++;
        uwu=uwu*res;
    }
    cout<<res;
}