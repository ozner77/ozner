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
        string s;
        cin>>s;
        vector<char> V;
        for(auto x:s){
            if(x=='q'){
                V.push_back('p');
            }else if(x=='p'){
                V.push_back('q');
            }else{
                V.push_back('w');
            }
        }
        reverse(V.begin(),V.end());
        for(auto x:V){
            cout<<x;
        }
        cout<<"\n";
    }
}