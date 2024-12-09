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
        string s;
        cin>>s;
        ll pythonesmejorenestassituaciones=s.size()-1;
        ll uwu=0;
        map<char,ll> M;
        for(auto x:s){
            uwu+=x-'0';
            M[x]++;
        }
        if(uwu%9==0){
            cout<<"YES\n";
        }else{
            if(true){
                ll seis=M['3'];
                ll dos=M['2'];
                int mod=uwu%9;
                if(mod%2==0){
                    ll triste=18-mod;
                    ll xd=triste/6;
                    if(seis>xd){
                        triste=triste-(xd*6);
                    }else{
                        triste=triste-(seis*6);
                    }
                    if(triste==0){
                        cout<<"YES\n";
                    }else{
                        ll lol=triste/2;
                        if(dos>lol){
                            triste=triste-(lol*2);
                        }else{
                            triste=triste-(dos*2);
                        }
                        if(triste==0){
                            cout<<"YES\n";
                        }else{
                            cout<<"NO\n";
                        }
                    }
                }else{
                    ll triste=9-mod;
                    ll xd=triste/6;
                    if(seis>xd){
                        triste=triste-(xd*6);
                    }else{
                        triste=triste-(seis*6);
                    }
                    if(triste==0){
                        cout<<"YES\n";
                    }else{
                        ll lol=triste/2;
                        if(dos>lol){
                            triste=triste-(lol*2);
                        }else{
                            triste=triste-(dos*2);
                        }
                        if(triste==0){
                            cout<<"YES\n";
                        }else{
                            cout<<"NO\n";
                        }
                    }
                }
            }
        }
    }
}