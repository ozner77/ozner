#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
typedef pair<ll,ll> pll;
typedef pair<int,int> pii;
typedef map<int,int> mii;
typedef map<ll,ll> mll;
int main(){
    ll n;
    cin>>n;
    ll hours,minutes,seconds;
    hours=n/3600;
    n=n%3600;
    minutes=n/60;
    n=n%60;
    seconds=n;
    cout<<hours<<" : "<<minutes<<" : "<<seconds<<"\n";
}