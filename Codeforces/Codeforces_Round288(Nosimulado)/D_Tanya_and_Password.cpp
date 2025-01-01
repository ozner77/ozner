#define ll long long
#include <bits/stdc++.h>
using namespace std;
map<string,vector<string>> M;
vector<string> Euler;
void dfs(string inicio){
	while(!M[inicio].empty()){
		string nodo=M[inicio].back();
		M[inicio].pop_back();
		dfs(nodo);
	}
	Euler.push_back(inicio);
}
int main(){
	ll t;
	map<string,ll> inout;
	cin>>t;
	string nodocualquiera;
	ll n=t;
	while(t--){
		string s;
		cin>>s;
		string x="";
		string y="";
		x+=s[0];x+=s[1];
		y+=s[1];y+=s[2];
		inout[y]++;
		inout[x]--;
		M[x].push_back(y);
		nodocualquiera=x;
	}
	string inicio="AAAA";
	bool com=false;
	bool com2=true;
	for(auto x:inout){
		if(x.second==-1){
			if(com){
				cout<<"NO\n";
				return 0;
			}else{
				com=true;
				com2=false;
				inicio=x.first;
			}
		}
		if(x.second==1){
			com2=false;
		}
		if(x.second>1 || x.second<-1){
			cout<<"NO\n";
			return 0;
		}
	}
	if(inicio=="AAAA"){
		if(com2){
			inicio=nodocualquiera;
		}else{
			cout<<"NO\n";
			return 0;
		}
	}
	dfs(inicio);
	if(Euler.size()!=n+1){
		cout<<"NO\n";
		return 0;
	}
	cout<<"YES\n";
	reverse(Euler.begin(),Euler.end());
	cout<<Euler[0][0];
	for(auto x:Euler){
		cout<<x[1];
	}
}
//quize optimizar la solucion que envie ayer,me gusto este problema al final