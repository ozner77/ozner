//https://codeforces.com/contest/1
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,a;
    cin>>n>>m>>a;
    long long res=0;
    long long x=n/a;
    long long y=m/a;
    if(n%a!=0){
        x++;
    }
    if(m%a!=0){
        y++;
    }
    cout<<x*y;
}