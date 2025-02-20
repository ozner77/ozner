#define ll long long
#include <bits/stdc++.h>
using namespace std;
int n;
string a1,b1;
vector<int> V;
map<char,map<char,vector<int>>> M;
map<char,vector<int>> M2;
map<char,vector<int>> M1;
void init(string a,string b){
    a1=a;b1=b;
    V.push_back(0);
    M['A']['T'].push_back(0);
    M['A']['C'].push_back(0);
    M['T']['A'].push_back(0);
    M['T']['C'].push_back(0);
    M['C']['A'].push_back(0);
    M['C']['T'].push_back(0);
    for(int i=0;i<a1.size();i++){
        if(a1[i]!=b1[i]){
            if (a1[i] == 'A' && b1[i] == 'T') {
                M['A']['T'].push_back(M['A']['T'][i] + 1);
                M['A']['C'].push_back(M['A']['C'][i]);
                M['T']['A'].push_back(M['T']['A'][i]);
                M['T']['C'].push_back(M['T']['C'][i]);
                M['C']['A'].push_back(M['C']['A'][i]);
                M['C']['T'].push_back(M['C']['T'][i]);
            }
            if (a1[i] == 'A' && b1[i] == 'C') {
                M['A']['T'].push_back(M['A']['T'][i]);
                M['A']['C'].push_back(M['A']['C'][i] + 1);
                M['T']['A'].push_back(M['T']['A'][i]);
                M['T']['C'].push_back(M['T']['C'][i]);
                M['C']['A'].push_back(M['C']['A'][i]);
                M['C']['T'].push_back(M['C']['T'][i]);
            }
            if (a1[i] == 'T' && b1[i] == 'A') {
                M['A']['T'].push_back(M['A']['T'][i]);
                M['A']['C'].push_back(M['A']['C'][i]);
                M['T']['A'].push_back(M['T']['A'][i] + 1);
                M['T']['C'].push_back(M['T']['C'][i]);
                M['C']['A'].push_back(M['C']['A'][i]);
                M['C']['T'].push_back(M['C']['T'][i]);
            }
            if (a1[i] == 'T' && b1[i] == 'C') {
                M['A']['T'].push_back(M['A']['T'][i]);
                M['A']['C'].push_back(M['A']['C'][i]);
                M['T']['A'].push_back(M['T']['A'][i]);
                M['T']['C'].push_back(M['T']['C'][i] + 1);
                M['C']['A'].push_back(M['C']['A'][i]);
                M['C']['T'].push_back(M['C']['T'][i]);
            }
            if (a1[i] == 'C' && b1[i] == 'A') {
                M['A']['T'].push_back(M['A']['T'][i]);
                M['A']['C'].push_back(M['A']['C'][i]);
                M['T']['A'].push_back(M['T']['A'][i]);
                M['T']['C'].push_back(M['T']['C'][i]);
                M['C']['A'].push_back(M['C']['A'][i] + 1);
                M['C']['T'].push_back(M['C']['T'][i]);
            }
            if (a1[i] == 'C' && b1[i] == 'T') {
                M['A']['T'].push_back(M['A']['T'][i]);
                M['A']['C'].push_back(M['A']['C'][i]);
                M['T']['A'].push_back(M['T']['A'][i]);
                M['T']['C'].push_back(M['T']['C'][i]);
                M['C']['A'].push_back(M['C']['A'][i]);
                M['C']['T'].push_back(M['C']['T'][i] + 1);
            }
        }else{
            M['A']['T'].push_back(M['A']['T'][i]);
            M['A']['C'].push_back(M['A']['C'][i]);
            M['T']['A'].push_back(M['T']['A'][i]);
            M['T']['C'].push_back(M['T']['C'][i]);
            M['C']['A'].push_back(M['C']['A'][i]);
            M['C']['T'].push_back(M['C']['T'][i]);
        }
    }
    M2['C'].push_back(0);
    M2['T'].push_back(0);
    M2['A'].push_back(0);
    M1['C'].push_back(0);
    M1['T'].push_back(0);
    M1['A'].push_back(0);
    for(int i=0;i<a1.size();i++){
        if(a1[i]=='C'){
            M2[a1[i]].push_back(M2[a1[i]][i]+1);
            M2['T'].push_back(M2['T'][i]);
            M2['A'].push_back(M2['A'][i]);
        }
        if(a1[i]=='A'){
            M2[a1[i]].push_back(M2[a1[i]][i]+1);
            M2['T'].push_back(M2['T'][i]);
            M2['C'].push_back(M2['C'][i]);
        }
        if(a1[i]=='T'){
            M2[a1[i]].push_back(M2[a1[i]][i]+1);
            M2['A'].push_back(M2['A'][i]);
            M2['C'].push_back(M2['C'][i]);
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
    int n1=M2['C'][y]-M2['C'][x-1];
    int n2=M2['T'][y]-M2['T'][x-1];
    int n3=M2['A'][y]-M2['A'][x-1];
    int m1=M1['C'][y]-M1['C'][x-1];
    int m2=M1['T'][y]-M1['T'][x-1];
    int m3=M1['A'][y]-M1['A'][x-1];
    if(n1==m1 && n2==m2 && n3==m3){
        int res1=min((M['A']['C'][y] - M['A']['C'][x - 1]),(M['C']['A'][y] - M['C']['A'][x - 1]));
        int res5=min((M['T']['A'][y] - M['T']['A'][x - 1]),(M['A']['T'][y] - M['A']['T'][x - 1]));
        int res6=min((M['T']['C'][y] - M['T']['C'][x - 1]),(M['C']['T'][y] - M['C']['T'][x - 1]));
        int res2 = abs((M['A']['C'][y] - M['A']['C'][x - 1]) - (M['C']['A'][y] - M['C']['A'][x - 1]));
        int res3 = abs((M['T']['A'][y] - M['T']['A'][x - 1]) - (M['A']['T'][y] - M['A']['T'][x - 1]));
        int res4 = abs((M['T']['C'][y] - M['T']['C'][x - 1]) - (M['C']['T'][y] - M['C']['T'][x - 1]));
        int res=((res2+res3+res4)/3)*2;
        res=res+(res1+res5+res6);
        return res;
    }
    return -1;
}
int main(){
    init("ACCAATC","CAACCAT");
    int res=get_distance(0,6);
    cout<<res<<"\n";
}
//me daba mas flojera hacerlo con for que hacerlo manualmente xddddddddddddddddddddd
//https://oj.uz/problem/view/IOI21_dna