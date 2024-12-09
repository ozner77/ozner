#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        n--;
        long long a=n/3;
        a=3*((a*(a+1))/2);
        long long b=n/5;
        b=5*((b*(b+1))/2);
        long long c=n/15;
        c=15*((c*(c+1))/2);
        cout<<a+b-c<<"\n";
    }
}