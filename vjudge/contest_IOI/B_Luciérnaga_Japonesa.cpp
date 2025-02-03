#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll b1(vector<ll> vec, ll x) {
    ll l = 0, r = vec.size();
    while (l < r) {
        ll m = l + (r - l) / 2;
        if (vec[m] >= x)
            r = m;
        else
            l = m + 1;
    }
    return l;
}
int main(){
    ll n,h;
    cin>>n>>h;
    ll uwu=n;
    vector<ll> down;
    vector<ll> up;
    ll con=0;
    while(n--){
        ll a;
        cin>>a;
        if(con%2==0){
            down.push_back(a);
        }else{
            up.push_back(h-a);
        }
        con++;
    }
    sort(down.begin(),down.end());
    sort(up.begin(),up.end());
    ll min=1e10;
    map<ll,ll> M;
    for(int i=1;i<=h;i++){
        ll x=b1(down,i);
        ll y=b1(up,i);
        ll res=0; 
        if(down[x]>=i){
            res+=down.size()-x;
        }
        if(i>=up[y-1] && y-1>=0){
            res+=y;
        }
        if(res<min){
            min=res;
        }
        M[res]++;
    }
    cout<<min<<" "<<M[min];
}