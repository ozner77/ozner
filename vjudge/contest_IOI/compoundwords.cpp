#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string> V;
    string s;
    while(cin>>s){
        V.push_back(s);
    }
    set<string> res;
    string res2;
    for(int i=0;i<V.size();i++){
        for(int j=0;j<V.size();j++){
            if(i!=j){
                res2=V[i];
                res2+=V[j];
                res.insert(res2);
            }
        }
    }
    for(auto x:res){
        cout<<x<<"\n";
    }
}