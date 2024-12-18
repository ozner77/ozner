#define ll long long
#define pb push_back
#define mp make_pair
#include <bits/stdc++.h>
using namespace std;
void fun(){

}
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2==0){
            n=n-1;
            n=n/2;
            n=n*2;
            n=n+1;
            cout<<n<<"\n";
        }else{
            n=n-1;
            n=n/2;
            n=n*2;
            cout<<n<<"\n";
        }
    }
}