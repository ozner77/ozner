#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t,n,a;
    cin>>t;
    while(t--){
        cin>>n;
        long long con=0,b=0,c=0;
        while(n--){
            cin>>a;
            if(a%3==0){
                con++;
            }else if(a%3==1){
                b++;
            }else{
                c++;
            }
        }
        long long res=0;
        if(b>c){
            b=b-c;
            b=b/3;
            res=con+c+b;
        }else{
            c=c-b;
            c=c/3;
            res=con+c+b;
        }
        cout<<res<<"\n";
    }
}