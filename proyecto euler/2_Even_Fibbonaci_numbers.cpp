#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<long long> Fibonnaci;
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long a=1;
        long long b=2;
        long long suma=0;
        while(a<=n){
            if(a%2==0){
                suma+=a;
            }
            if(b%2==0 && b<=n){
                suma+=b;
            }
            a=b+a;
            b=a+b;
        }
        cout<<suma<<"\n";
    }
}