#define ll long long
#define pb push_back
#define mp make_pair
#include <bits/stdc++.h>
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    map<ll,ll> M;
    while(t--){
        cin>>n;
        M[n]++;
    }
    cout<<M.size();
}