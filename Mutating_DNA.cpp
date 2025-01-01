#define ll long long
#include <bits/stdc++.h>
using namespace std;
int n;
string a1,b1;
vector<int> V;
map<char,vector<int>> M;
map<char,vector<int>> M1;
void init(string a,string b){
    a1=a;b1=b;
    V.push_back(0);
    for(int i=0;i<a1.size();i++){
        if(a1[i]!=b1[i]){
            V.push_back(V[i]+1);
        }else{
            V.push_back(V[i]);
        }
    }
    M['C'].push_back(0);
    M['T'].push_back(0);
    M['A'].push_back(0);
    M1['C'].push_back(0);
    M1['T'].push_back(0);
    M1['A'].push_back(0);
    for(int i=0;i<a1.size();i++){
        if(a1[i]=='C'){
            M[a1[i]].push_back(M[a1[i]][i]+1);
            M['T'].push_back(M['T'][i]);
            M['A'].push_back(M['A'][i]);
        }
        if(a1[i]=='A'){
            M[a1[i]].push_back(M[a1[i]][i]+1);
            M['T'].push_back(M['T'][i]);
            M['C'].push_back(M['C'][i]);
        }
        if(a1[i]=='T'){
            M[a1[i]].push_back(M[a1[i]][i]+1);
            M['A'].push_back(M['A'][i]);
            M['C'].push_back(M['C'][i]);
        }
    }
    for(int i=0;i<a1.size();i++){
        if(b1[i]=='C'){
            M1[b1[i]].push_back(M1[b1[i]][i]+1);
            M1['T'].push_back(M1['T'][i]);
            M1['A'].push_back(M1['A'][i]);
        }
        if(b1[i]=='A'){
            M1[b1[i]].push_back(M1[b1[i]][i]+1);
            M1['T'].push_back(M1['T'][i]);
            M1['C'].push_back(M1['C'][i]);
        }
        if(b1[i]=='T'){
            M1[b1[i]].push_back(M1[b1[i]][i]+1);
            M1['A'].push_back(M1['A'][i]);
            M1['C'].push_back(M1['C'][i]);
        }
    }
}
int get_distance(int x, int y){
    x++;
    y++;
    int res=V[y]-V[x-1];
    int n1=M['C'][y]-M['C'][x-1];
    int n2=M['T'][y]-M['T'][x-1];
    int n3=M['A'][y]-M['A'][x-1];
    int m1=M1['C'][y]-M1['C'][x-1];
    int m2=M1['T'][y]-M1['T'][x-1];
    int m3=M1['A'][y]-M1['A'][x-1];
    if(n1==m1 && n2==m2 && n3==m3){
        if(res%2==0)return res/2;
        return res/2+1;
    }
    return -1;
}
int main(){
    init("ATCATC","CATCAT");
    int res=get_distance(0,5);
    cout<<res<<"\n";
}
//no saco 100 porque pase todo el dia con el minimun spanning porqueria y quiero ir a celebrar navidad bye
//https://oj.uz/problem/view/IOI21_dna