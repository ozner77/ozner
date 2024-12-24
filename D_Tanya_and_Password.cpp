#define ll long long
#define pb push_back
#define mp make_pair
#include <bits/stdc++.h>
using namespace std;
int main(){
    ll t, base;
    cin >> t;
    vector<string> V;
    map<string,pair<ll,vector<ll>>> M;
    vector<bool> visitados(t,false);
    string s,s1;
    bool com=true,com2=true;
    string password="";
    for(ll i=0;i<t;i++){
        cin >> s;
        s1 = s[1];
        s1 += s[2];
        M[s1].first++;
        M[s1].second.push_back(i);
        V.push_back(s);
    }
    vector<ll> unidos(t);
    for(ll i=0;i<V.size();i++){
        string s3="";
        s3 += V[i][0];
        s3 += V[i][1];
        if(V[i][0] == V[i][1] && V[i][0] == V[i][2]){
            M[s3].first--;
            if(visitados[i]){
                M[s3].first++;
            }
        }
        if(M[s3].first>0){
            if(M[s3].second.size()>0){
                unidos[i]=M[s3].second[M[s3].second.size()-1];
                visitados[M[s3].second[M[s3].second.size()-1]]=true;
                M[s3].second.pop_back();
            }else{
                base=i;
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
        if(V[i][0] == V[i][1] && V[i][0] == V[i][2]){
            M[s3].first++;
            if(visitados[i]){
                M[s3].first--;
            }
        }
    }
    if(com2){
        cout<<"YES\n";
        ll sumita=0;
        for(auto x:unidos){
            sumita+=x;
        }
        ll n=unidos.size()-1;
        n=n*(n+1);
        n=n/2;
        n=n-sumita;
        ll con=0;
        password=V[n];
        while(true){
            if(con==t-1){
                break;
            }
            n=unidos[n];
            password=V[n][0]+password;
            con++;
        }
        cout<<password;
    }
}
//creo que el error es que se pueden unir cuando ya estan unidos lo cual no me funciono arreglarlo con union find pero estoy probando