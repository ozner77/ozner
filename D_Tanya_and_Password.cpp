#define ll long long
#define pb push_back
#define mp make_pair
#include <bits/stdc++.h>
using namespace std;
int main(){
    ll t;
    cin>>t;
    vector<string> V;
    map<string,pair<ll,vector<ll>>> M;
    string s,s1;
    bool com=true,com2=true;
    string password="";
    for(int i=0;i<t;i++){
        cin>>s;
        s1=s[1];
        s1+=s[2];
        M[s1].first++;
        M[s1].second.push_back(i);
        V.push_back(s);
    }
    vector<ll> unidos(t);
    for(ll i=0;i<V.size();i++){
        string s3="";
        s3+=V[i][0];
        s3+=V[i][1];
        if(V[i][0]==V[i][1] && V[i][0]==V[i][2]){
            M[s3].first--;
        }
        if(M[s3].first>0){
            if(M[s3].second.size()>0){
            unidos[i]=M[s3].second[M[s3].second.size()-1];
            M[s3].second.pop_back();
            }
            continue;
        }else{
            if(com){
                com=false;
                continue;
            }else{
                com2=false;
                cout<<"NO";
                break;
            }
        }
    }
    if(com2){
        cout<<"YES\n";
        ll sumita=0;
        for(auto x:unidos){
            sumita+=x;
            cout<<x<<" ";
        }
        ll n=unidos.size()-1;
        n=n*(n+1);
        n=n/2;
        n=n-sumita;
        cout<<n;
    }
}