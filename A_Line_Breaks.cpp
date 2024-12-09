#define ll long long
#define pb push_back
#define mp make_pair
#include <bits/stdc++.h>
using namespace std;
string s;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int sum=0;
        int res=0;
        while(n--){
            cin>>s;
            sum+=s.size();
            if(sum<=m){
                res++;
            }
        }
        cout<<res<<"\n";
    }
}