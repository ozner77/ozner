#define ll long long
#include <bits/stdc++.h>
using namespace std;
string a1,b1;
int n;
void init(string a,string b){
    a1=a;b1=b;
    n=a.size();
}
int get_distance(int x, int y){
    map<char,int> M;
    map<char,int> M1;
    int res=0;
 for(int i=x;i<=y;i++){
        M[a1[i]]++;
        M1[b1[i]]++;
        if(a1[i]!=b1[i]){
            res++;
        }
    }
    bool com=false;
    for(auto x:M){
        if(x.second==M1[x.first]){
            continue;
        }else{
            return -1;
        }
    }
    if(res%2==0){
        return res/2;
    }else{
        return (res/2)+1;
    }
}
int main(){
    init("TCAAT","ATCTA");
    int res=get_distance(0,4);
    cout<<res<<"\n";
}
//no saco 100 porque pase todo el dia con el minimun spanning porqueria y quiero ir a celebrar navidad bye