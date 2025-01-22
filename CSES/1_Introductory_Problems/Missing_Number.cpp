#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long suma=0;
    for(int i=0;i<n-1;i++){
        int a;
        cin>>a;
        suma=suma+a;
    }
    long long formula=(n*(n+1))/2;
    cout<<formula-suma;
}